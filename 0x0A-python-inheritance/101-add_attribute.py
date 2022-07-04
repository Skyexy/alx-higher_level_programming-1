#!/usr/bin/python3
""" Function that adds a new attribute to an object
    Args:
        obj: object
        name: attribute name
        value: attribute value
    Raises:
        TypeError: when the attribute cant be added

    """


def add_attribute(obj, name, value):
    """ Function that adds a new attribute to an object
    Args:
        obj: object
        name: attribute name
        value: attribute value
    Raises:
        TypeError: when the attribute cant be added

    """

    if not hasattr(obj, "__dict__"):
        raise TypeError("cant add new attribute")

    setattr(obj, name, value)
