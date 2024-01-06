from fabric import task


@task
def hello(c):
    """Prints Hello Fabric!"""
    print("Hello Fabric!")

@task
def hello_hosts(c):
    """Prints hello <hostname> to all hosts."""

    # Get hostname of the current host.
    hostname_res = c.run('hostname', warn=True)

    if hostname_res.ok:
        hostname = hostname_res.stdout.strip()
        print(f"Hello {hostname}");
    else:
        print(f"Failed to get hostname");
