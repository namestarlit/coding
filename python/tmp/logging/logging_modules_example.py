#!/usr/bin/env python3
"""Naming logger instances"""
import logging


logging.basicConfig(level=logging.WARNING)

log1 = logging.getLogger("package1.module1")
log2 = logging.getLogger("package2.module2")

log1.warning("This message comes from one module")
log2.warning("This message comes from another module")
