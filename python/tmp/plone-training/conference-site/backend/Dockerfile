# syntax=docker/dockerfile:1
ARG PLONE_VERSION
FROM plone/server-builder:${PLONE_VERSION:-6.0.12} as builder

WORKDIR /app

# Add local code
COPY . .

# Install local requirements and pre-compile mo files
RUN <<EOT
    set -e
    bin/pip install mxdev
    mv requirements-docker.txt requirements.txt
    sed -i 's/-e src\/conference_site\[test\]/src\/conference_site/g' mx.ini
    bin/mxdev -c mx.ini
    bin/pip install -r requirements-mxdev.txt
    bin/python /compile_mo.py
    rm -Rf src/
EOT

FROM plone/server-prod-config:${PLONE_VERSION:-6.0.12}

LABEL maintainer="Plone Foundation <collective@plone.org>" \
      org.label-schema.name="conference-site-backend" \
      org.label-schema.description="conference site backend image." \
      org.label-schema.vendor="Plone Foundation"

# Copy /app from builder
COPY --from=builder /app /app

RUN <<EOT
    set -e
    ln -s /data /app/var
EOT
