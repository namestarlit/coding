"""Init and utils."""
from zope.i18nmessageid import MessageFactory

import logging


PACKAGE_NAME = "conference_site"

_ = MessageFactory("conference_site")

logger = logging.getLogger("conference_site")
