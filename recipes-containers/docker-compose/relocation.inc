export sites="k8s.io/api:k8s.io/api:force \
           k8s.io/utils:k8s.io/utils:force \
           k8s.io/klog/v2:k8s.io/klog/v2:force \
           gotest.tools/v3:gotest.tools/v3:force \
           gopkg.in/inf.v0:gopkg.in/inf.v0:force \
           gopkg.in/ini.v1:gopkg.in/ini.v1:force \
           gopkg.in/yaml.v2:gopkg.in/yaml.v2:force \
           golang.org/x/exp:golang.org/x/exp:force \
           golang.org/x/mod:golang.org/x/mod:force \
           golang.org/x/net:golang.org/x/net:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           k8s.io/client-go:k8s.io/client-go:force \
           sigs.k8s.io/json:sigs.k8s.io/json:force \
           sigs.k8s.io/yaml:sigs.k8s.io/yaml:force \
           golang.org/x/sync:golang.org/x/sync:force \
           golang.org/x/term:golang.org/x/term:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/time:golang.org/x/time:force \
           go.uber.org/goleak:go.uber.org/goleak:force \
           golang.org/x/tools:golang.org/x/tools:force \
           golang.org/x/crypto:golang.org/x/crypto:force \
           golang.org/x/oauth2:golang.org/x/oauth2:force \
           k8s.io/apimachinery:k8s.io/apimachinery:force \
           k8s.io/kube-openapi:k8s.io/kube-openapi:force \
           github.com/moby/term:github.com/moby/term:force \
           github.com/docker/go:github.com/docker/go:force \
           github.com/kr/pretty:github.com/kr/pretty:force \
           github.com/docker/cli:github.com/docker/cli:force \
           github.com/pkg/errors:github.com/pkg/errors:force \
           github.com/gofrs/uuid:github.com/gofrs/uuid:force \
           github.com/mgutz/ansi:github.com/mgutz/ansi:force \
           github.com/spf13/cast:github.com/spf13/cast:force \
           github.com/golang/mock:github.com/golang/mock:force \
           github.com/spf13/cobra:github.com/spf13/cobra:force \
           github.com/spf13/pflag:github.com/spf13/pflag:force \
           google.golang.org/grpc:google.golang.org/grpc:force \
           github.com/gofrs/flock:github.com/gofrs/flock:force \
           github.com/gorilla/mux:github.com/gorilla/mux:force \
           github.com/jinzhu/gorm:github.com/jinzhu/gorm:force \
           github.com/moby/locker:github.com/moby/locker:force \
           github.com/rivo/uniseg:github.com/rivo/uniseg:force \
           github.com/spf13/afero:github.com/spf13/afero:force \
           github.com/buger/goterm:github.com/buger/goterm:force \
           github.com/morikuni/aec:github.com/morikuni/aec:force \
           github.com/beorn7/perks:github.com/beorn7/perks:force \
           github.com/go-logr/logr:github.com/go-logr/logr:force \
           github.com/go-logr/stdr:github.com/go-logr/stdr:force \
           github.com/google/shlex:github.com/google/shlex:force \
           github.com/miekg/pkcs11:github.com/miekg/pkcs11:force \
           github.com/zmap/zcrypto:github.com/zmap/zcrypto:force \
           github.com/docker/buildx:github.com/docker/buildx:force \
           github.com/docker/docker:github.com/docker/docker:force \
           github.com/moby/buildkit:github.com/moby/buildkit:force \
           go.opentelemetry.io/otel:go.opentelemetry.io/otel:force \
           github.com/aws/smithy-go:github.com/aws/smithy-go:force \
           github.com/gogo/protobuf:github.com/gogo/protobuf:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/google/gofuzz:github.com/google/gofuzz:force \
           github.com/hashicorp/hcl:github.com/hashicorp/hcl:force \
           github.com/imdario/mergo:github.com/imdario/mergo:force \
           github.com/google/gnostic:github.com/google/gnostic:force \
           github.com/cucumber/godog:github.com/laurazard/godog:force \
           github.com/docker/go-units:github.com/docker/go-units:force \
           github.com/sirupsen/logrus:github.com/sirupsen/logrus:force \
           github.com/davecgh/go-spew:github.com/davecgh/go-spew:force \
           github.com/go-openapi/swag:github.com/go-openapi/swag:force \
           github.com/gogo/googleapis:github.com/gogo/googleapis:force \
           github.com/golang/protobuf:github.com/golang/protobuf:force \
           github.com/mailru/easyjson:github.com/mailru/easyjson:force \
           github.com/mattn/go-isatty:github.com/mattn/go-isatty:force \
           github.com/moby/spdystream:github.com/moby/spdystream:force \
           github.com/subosito/gotenv:github.com/subosito/gotenv:force \
           google.golang.org/genproto:google.golang.org/genproto:force \
           google.golang.org/protobuf:google.golang.org/protobuf:force \
           github.com/stretchr/testify:github.com/stretchr/testify:force \
           github.com/cloudflare/cfssl:github.com/cloudflare/cfssl:force \
           github.com/josharian/intern:github.com/josharian/intern:force \
           github.com/json-iterator/go:github.com/json-iterator/go:force \
           github.com/serialx/hashring:github.com/serialx/hashring:force \
           github.com/tonistiigi/units:github.com/tonistiigi/units:force \
           github.com/tonistiigi/vt100:github.com/tonistiigi/vt100:force \
           google.golang.org/appengine:google.golang.org/appengine:force \
           github.com/fsnotify/fsevents:github.com/fsnotify/fsevents:force \
           github.com/tilt-dev/fsnotify:github.com/tilt-dev/fsnotify:force \
           github.com/Azure/go-ansiterm:github.com/Azure/go-ansiterm:force \
           github.com/aws/aws-sdk-go-v2:github.com/aws/aws-sdk-go-v2:force \
           github.com/cespare/xxhash/v2:github.com/cespare/xxhash/v2:force \
           github.com/docker/go-metrics:github.com/docker/go-metrics:force \
           github.com/felixge/httpsnoop:github.com/felixge/httpsnoop:force \
           github.com/hashicorp/errwrap:github.com/hashicorp/errwrap:force \
           github.com/munnerz/goautoneg:github.com/munnerz/goautoneg:force \
           github.com/pelletier/go-toml:github.com/pelletier/go-toml:force \
           github.com/prometheus/common:github.com/prometheus/common:force \
           github.com/prometheus/procfs:github.com/prometheus/procfs:force \
           github.com/tonistiigi/fsutil:github.com/tonistiigi/fsutil:force \
           github.com/Microsoft/go-winio:github.com/Microsoft/go-winio:force \
           github.com/containerd/console:github.com/containerd/console:force \
           github.com/bugsnag/bugsnag-go:github.com/bugsnag/bugsnag-go:force \
           github.com/fvbommel/sortorder:github.com/fvbommel/sortorder:force \
           github.com/hashicorp/go-memdb:github.com/hashicorp/go-memdb:force \
           github.com/klauspost/compress:github.com/klauspost/compress:force \
           github.com/mattn/go-colorable:github.com/mattn/go-colorable:force \
           github.com/mattn/go-runewidth:github.com/mattn/go-runewidth:force \
           github.com/modern-go/reflect2:github.com/modern-go/reflect2:force \
           github.com/pmezard/go-difflib:github.com/pmezard/go-difflib:force \
           github.com/moby/sys/signal:github.com/moby/sys/signal/signal:force \
           github.com/jonboulle/clockwork:github.com/jonboulle/clockwork:force \
           github.com/mattn/go-shellwords:github.com/mattn/go-shellwords:force \
           github.com/moby/patternmatcher:github.com/moby/patternmatcher:force \
           go.opentelemetry.io/otel/sdk:go.opentelemetry.io/otel/sdk/sdk:force \
           github.com/cenkalti/backoff/v4:github.com/cenkalti/backoff/v4:force \
           github.com/docker/distribution:github.com/docker/distribution:force \
           github.com/opencontainers/runc:github.com/opencontainers/runc:force \
           github.com/shibumi/go-pathspec:github.com/shibumi/go-pathspec:force \
           github.com/docker/cli-docs-tool:github.com/docker/cli-docs-tool:force \
           github.com/hashicorp/go-version:github.com/hashicorp/go-version:force \
           github.com/hashicorp/golang-lru:github.com/hashicorp/golang-lru:force \
           github.com/moby/sys/symlink:github.com/moby/sys/symlink/symlink:force \
           github.com/modern-go/concurrent:github.com/modern-go/concurrent:force \
           github.com/pelletier/go-toml/v2:github.com/pelletier/go-toml/v2:force \
           github.com/xeipuuv/gojsonschema:github.com/xeipuuv/gojsonschema:force \
           github.com/AlecAivazis/survey/v2:github.com/AlecAivazis/survey/v2:force \
           github.com/containerd/containerd:github.com/containerd/containerd:force \
           github.com/docker/go-connections:github.com/docker/go-connections:force \
           github.com/Masterminds/semver/v3:github.com/Masterminds/semver/v3:force \
           github.com/containerd/continuity:github.com/containerd/continuity:force \
           github.com/containerd/typeurl/v2:github.com/containerd/typeurl/v2:force \
           github.com/magiconair/properties:github.com/magiconair/properties:force \
           github.com/xeipuuv/gojsonpointer:github.com/xeipuuv/gojsonpointer:force \
           go.opentelemetry.io/proto/otlp:go.opentelemetry.io/proto/otlp/otlp:force \
           github.com/mitchellh/mapstructure:github.com/mitchellh/mapstructure:force \
           go.opentelemetry.io/otel/trace:go.opentelemetry.io/otel/trace/trace:force \
           github.com/emicklei/go-restful/v3:github.com/emicklei/go-restful/v3:force \
           github.com/go-openapi/jsonpointer:github.com/go-openapi/jsonpointer:force \
           github.com/in-toto/in-toto-golang:github.com/in-toto/in-toto-golang:force \
           github.com/kballard/go-shellquote:github.com/kballard/go-shellquote:force \
           github.com/compose-spec/compose-go:github.com/compose-spec/compose-go:force \
           github.com/hashicorp/go-multierror:github.com/hashicorp/go-multierror:force \
           github.com/cucumber/gherkin-go/v19:github.com/cucumber/gherkin-go/v19:force \
           github.com/moby/sys/mountinfo:github.com/moby/sys/mountinfo/mountinfo:force \
           github.com/prometheus/client_model:github.com/prometheus/client_model:force \
           github.com/spf13/jwalterweatherman:github.com/spf13/jwalterweatherman:force \
           github.com/xeipuuv/gojsonreference:github.com/xeipuuv/gojsonreference:force \
           go.opentelemetry.io/otel/metric:go.opentelemetry.io/otel/metric/metric:force \
           github.com/opencontainers/go-digest:github.com/opencontainers/go-digest:force \
           github.com/cucumber/messages-go/v16:github.com/cucumber/messages-go/v16:force \
           github.com/go-openapi/jsonreference:github.com/go-openapi/jsonreference:force \
           github.com/prometheus/client_golang:github.com/prometheus/client_golang:force \
           github.com/moby/sys/sequential:github.com/moby/sys/sequential/sequential:force \
           github.com/opencontainers/image-spec:github.com/opencontainers/image-spec:force \
           github.com/theupdateframework/notary:github.com/theupdateframework/notary:force \
           github.com/AdaLogics/go-fuzz-headers:github.com/AdaLogics/go-fuzz-headers:force \
           github.com/inconshreveable/mousetrap:github.com/inconshreveable/mousetrap:force \
           sigs.k8s.io/structured-merge-diff/v4:sigs.k8s.io/structured-merge-diff/v4:force \
           github.com/cyphar/filepath-securejoin:github.com/cyphar/filepath-securejoin:force \
           github.com/aws/aws-sdk-go-v2/config:github.com/aws/aws-sdk-go-v2/config/config:force \
           github.com/distribution/distribution/v3:github.com/distribution/distribution/v3:force \
           github.com/hashicorp/go-immutable-radix:github.com/hashicorp/go-immutable-radix:force \
           github.com/grpc-ecosystem/grpc-gateway/v2:github.com/grpc-ecosystem/grpc-gateway/v2:force \
           github.com/docker/docker-credential-helpers:github.com/docker/docker-credential-helpers:force \
           github.com/grpc-ecosystem/go-grpc-middleware:github.com/grpc-ecosystem/go-grpc-middleware:force \
           github.com/aws/aws-sdk-go-v2/credentials:github.com/aws/aws-sdk-go-v2/credentials/credentials:force \
           github.com/aws/aws-sdk-go-v2/service/sso:github.com/aws/aws-sdk-go-v2/service/sso/service/sso:force \
           github.com/aws/aws-sdk-go-v2/service/sts:github.com/aws/aws-sdk-go-v2/service/sts/service/sts:force \
           github.com/aws/aws-sdk-go-v2/internal/ini:github.com/aws/aws-sdk-go-v2/internal/ini/internal/ini:force \
           github.com/matttproud/golang_protobuf_extensions:github.com/matttproud/golang_protobuf_extensions:force \
           google.golang.org/genproto/googleapis/api:google.golang.org/genproto/googleapis/api/googleapis/api:force \
           google.golang.org/genproto/googleapis/rpc:google.golang.org/genproto/googleapis/rpc/googleapis/rpc:force \
           github.com/secure-systems-lab/go-securesystemslib:github.com/secure-systems-lab/go-securesystemslib:force \
           github.com/aws/aws-sdk-go-v2/service/ssooidc:github.com/aws/aws-sdk-go-v2/service/ssooidc/service/ssooidc:force \
           github.com/aws/aws-sdk-go-v2/feature/ec2/imds:github.com/aws/aws-sdk-go-v2/feature/ec2/imds/feature/ec2/imds:force \
           github.com/aws/aws-sdk-go-v2/internal/endpoints/v2:github.com/aws/aws-sdk-go-v2/internal/endpoints/v2/internal/endpoints/v2:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace:go.opentelemetry.io/otel/exporters/otlp/otlptrace/exporters/otlp/otlptrace:force \
           github.com/aws/aws-sdk-go-v2/internal/configsources:github.com/aws/aws-sdk-go-v2/internal/configsources/internal/configsources:force \
           go.opentelemetry.io/otel/exporters/otlp/internal/retry:go.opentelemetry.io/otel/exporters/otlp/internal/retry/exporters/otlp/internal/retry:force \
           github.com/aws/aws-sdk-go-v2/service/internal/presigned-url:github.com/aws/aws-sdk-go-v2/service/internal/presigned-url/service/internal/presigned-url:force \
           go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp:go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp/instrumentation/net/http/otelhttp:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc:go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc/exporters/otlp/otlptrace/otlptracegrpc:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp:go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp/exporters/otlp/otlptrace/otlptracehttp:force \
           go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc:go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc/instrumentation/google.golang.org/grpc/otelgrpc:force \
           go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace:go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace/instrumentation/net/http/httptrace/otelhttptrace:force"

do_compile:prepend() {
    cd ${S}/src/import
    for s in $sites; do
        site_dest=$(echo $s | cut -d: -f1)
        site_source=$(echo $s | cut -d: -f2)
        force_flag=$(echo $s | cut -d: -f3)
        mkdir -p vendor.copy/$site_dest
        if [ -n "$force_flag" ]; then
	    echo "[INFO] $site_dest: force copying .go files"
	    rm -rf vendor.copy/$site_dest
	    rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest
        else
            [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ] && { echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)" ; true ; } || { echo "[INFO] $site_dest: copying .go files" ; rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest ; }
        fi
    done
}
