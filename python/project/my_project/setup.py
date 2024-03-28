from setuptools import setup

# module level dunders (double scores)
__project__ = "motivate"
__version__ = "0.0.1"
__description__ = "A Python module to motivate you"
__packages__ = ["motivate"]
__author__ = "namestarlit"
__author_email__="rainson.work@gmail.com"
__classifiers__ = [
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Education",
        "Programming Language :: Python :: 3",
        ]
__keywords__ = ["motivation", "learning"]

setup(
    name=__project__,
    version=__version__,
    description=__description__,
    packages=__packages__,
    author=__author__,
    author_email=__author_email__,
    classifiers=__classifiers__,
    keywords=__keywords__,
)
