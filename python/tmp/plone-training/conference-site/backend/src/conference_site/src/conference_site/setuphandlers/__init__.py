from conference_site import logger
from conference_site.setuphandlers import content
from conference_site.setuphandlers import users
from plone import api
from Products.CMFPlone.interfaces import INonInstallable
from zope.interface import implementer


@implementer(INonInstallable)
class HiddenProfiles(object):
    def getNonInstallableProfiles(self):
        """Hide uninstall profile from site-creation and quickinstaller."""
        return [
            "conference_site:uninstall",
        ]


def populate_portal(context):
    """Post install script"""
    portal = api.portal.get()
    # Delete content
    content.delete_content(portal)
    logger.info("Deleted default portal content")
    user = users.create_default_user()
    creators = [user.id]
    logger.info("Created default user")
    # Create other users
    users.create_team_accounts()
    logger.info("Created team accounts")
    # Create Initial content
    content.populate_portal(portal, creators)
    logger.info("Created initial content")
    # Update cover content
    content.update_home(portal, creators)
