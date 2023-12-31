export sites="k8s.io/utils:k8s.io/utils:force \
           k8s.io/gengo:k8s.io/gengo:force \
           go.uber.org/zap:go.uber.org/zap:force \
           go.starlark.net:go.starlark.net:force \
           gopkg.in/inf.v0:gopkg.in/inf.v0:force \
           gopkg.in/ini.v1:gopkg.in/ini.v1:force \
           golang.org/x/net:golang.org/x/net:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v2:gopkg.in/yaml.v2:force \
           inet.af/tcpproxy:inet.af/tcpproxy:force \
           sigs.k8s.io/yaml:sigs.k8s.io/yaml:force \
           go.etcd.io/bbolt:go.etcd.io/bbolt:force \
           go.opencensus.io:go.opencensus.io:force \
           golang.org/x/mod:golang.org/x/mod:force \
           gopkg.in/gcfg.v1:gopkg.in/gcfg.v1:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           sigs.k8s.io/json:sigs.k8s.io/json:force \
           github.com/lib/pq:github.com/lib/pq:force \
           golang.org/x/sync:golang.org/x/sync:force \
           github.com/rs/xid:github.com/rs/xid:force \
           golang.org/x/term:golang.org/x/term:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/time:golang.org/x/time:force \
           go.uber.org/atomic:go.uber.org/atomic:force \
           golang.org/x/tools:golang.org/x/tools:force \
           golang.org/x/crypto:golang.org/x/crypto:force \
           cloud.google.com/go:cloud.google.com/go:force \
           golang.org/x/oauth2:golang.org/x/oauth2:force \
           k8s.io/kube-openapi:k8s.io/kube-openapi:force \
           k8s.io/klog/v2:github.com/k3s-io/klog/v2:force \
           github.com/moby/ipvs:github.com/moby/ipvs:force \
           github.com/moby/term:github.com/moby/term:force \
           go.mozilla.org/pkcs7:go.mozilla.org/pkcs7:force \
           go.uber.org/multierr:go.uber.org/multierr:force \
           gopkg.in/warnings.v0:gopkg.in/warnings.v0:force \
           github.com/pkg/errors:github.com/pkg/errors:force \
           github.com/urfave/cli:github.com/urfave/cli:force \
           github.com/docker/cli:github.com/docker/cli:force \
           github.com/gofrs/uuid:github.com/gofrs/uuid:force \
           google.golang.org/api:google.golang.org/api:force \
           github.com/google/uuid:github.com/google/uuid:force \
           github.com/gorilla/mux:github.com/gorilla/mux:force \
           github.com/k3s-io/kine:github.com/k3s-io/kine:force \
           github.com/onsi/gomega:github.com/onsi/gomega:force \
           github.com/spf13/pflag:github.com/spf13/pflag:force \
           google.golang.org/grpc:google.golang.org/grpc:force \
           github.com/cilium/ebpf:github.com/cilium/ebpf:force \
           github.com/ghodss/yaml:github.com/ghodss/yaml:force \
           github.com/gofrs/flock:github.com/gofrs/flock:force \
           github.com/golang/mock:github.com/golang/mock:force \
           github.com/moby/locker:github.com/moby/locker:force \
           github.com/pierrec/lz4:github.com/pierrec/lz4:force \
           github.com/spf13/cobra:github.com/spf13/cobra:force \
           k8s.io/kubernetes:github.com/k3s-io/kubernetes:force \
           github.com/go-test/deep:github.com/go-test/deep:force \
           github.com/otiai10/copy:github.com/otiai10/copy:force \
           github.com/Rican7/retry:github.com/Rican7/retry:force \
           github.com/beorn7/perks:github.com/beorn7/perks:force \
           github.com/blang/semver:github.com/blang/semver:force \
           github.com/go-logr/logr:github.com/go-logr/logr:force \
           github.com/go-logr/stdr:github.com/go-logr/stdr:force \
           github.com/google/btree:github.com/google/btree:force \
           github.com/google/pprof:github.com/google/pprof:force \
           github.com/google/shlex:github.com/google/shlex:force \
           github.com/jackc/pgx/v5:github.com/jackc/pgx/v5:force \
           github.com/miekg/pkcs11:github.com/miekg/pkcs11:force \
           github.com/morikuni/aec:github.com/morikuni/aec:force \
           github.com/nats-io/nuid:github.com/nats-io/nuid:force \
           github.com/docker/docker:github.com/docker/docker:force \
           github.com/rancher/lasso:github.com/rancher/lasso:force \
           github.com/armon/circbuf:github.com/armon/circbuf:force \
           github.com/gogo/protobuf:github.com/gogo/protobuf:force \
           github.com/google/cel-go:github.com/google/cel-go:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/google/gofuzz:github.com/google/gofuzz:force \
           github.com/imdario/mergo:github.com/imdario/mergo:force \
           github.com/nats-io/nkeys:github.com/nats-io/nkeys:force \
           github.com/soheilhy/cmux:github.com/soheilhy/cmux:force \
           github.com/urfave/cli/v2:github.com/urfave/cli/v2:force \
           go.opentelemetry.io/otel:go.opentelemetry.io/otel:force \
           github.com/containerd/zfs:github.com/containerd/zfs:force \
           github.com/onsi/ginkgo/v2:github.com/onsi/ginkgo/v2:force \
           github.com/robfig/cron/v3:github.com/robfig/cron/v3:force \
           github.com/containerd/nri:github.com/containerd/nri:force \
           github.com/coreos/go-oidc:github.com/coreos/go-oidc:force \
           github.com/godbus/dbus/v5:github.com/godbus/dbus/v5:force \
           github.com/google/gnostic:github.com/google/gnostic:force \
           github.com/minio/md5-simd:github.com/minio/md5-simd:force \
           github.com/mohae/deepcopy:github.com/mohae/deepcopy:force \
           github.com/nats-io/jsm.go:github.com/nats-io/jsm.go:force \
           github.com/nats-io/jwt/v2:github.com/nats-io/jwt/v2:force \
           github.com/rubiojr/go-vhd:github.com/rubiojr/go-vhd:force \
           github.com/vmware/govmomi:github.com/vmware/govmomi:force \
           github.com/xlab/treeprint:github.com/xlab/treeprint:force \
           github.com/xrash/smetrics:github.com/xrash/smetrics:force \
           github.com/containerd/aufs:github.com/containerd/aufs:force \
           github.com/google/cadvisor:github.com/google/cadvisor:force \
           github.com/rancher/wharfie:github.com/rancher/wharfie:force \
           github.com/sirupsen/logrus:github.com/sirupsen/logrus:force \
           github.com/blang/semver/v4:github.com/blang/semver/v4:force \
           github.com/containerd/fifo:github.com/containerd/fifo:force \
           github.com/davecgh/go-spew:github.com/davecgh/go-spew:force \
           github.com/docker/go-units:github.com/docker/go-units:force \
           github.com/fatih/camelcase:github.com/fatih/camelcase:force \
           github.com/go-openapi/swag:github.com/go-openapi/swag:force \
           github.com/golang/protobuf:github.com/golang/protobuf:force \
           github.com/intel/goresctrl:github.com/intel/goresctrl:force \
           github.com/jackc/pgerrcode:github.com/jackc/pgerrcode:force \
           github.com/mailru/easyjson:github.com/mailru/easyjson:force \
           github.com/mdlayher/socket:github.com/mdlayher/socket:force \
           github.com/moby/spdystream:github.com/moby/spdystream:force \
           github.com/mxk/go-flowrate:github.com/mxk/go-flowrate:force \
           github.com/nats-io/nats.go:github.com/nats-io/nats.go:force \
           github.com/xiang90/probing:github.com/xiang90/probing:force \
           golang.zx2c4.com/wireguard:golang.zx2c4.com/wireguard:force \
           google.golang.org/genproto:google.golang.org/genproto:force \
           google.golang.org/protobuf:google.golang.org/protobuf:force \
           gopkg.in/square/go-jose.v2:gopkg.in/square/go-jose.v2:force \
           github.com/json-iterator/go:github.com/json-iterator/go:force \
           github.com/mattn/go-sqlite3:github.com/mattn/go-sqlite3:force \
           github.com/rancher/wrangler:github.com/rancher/wrangler:force \
           github.com/stretchr/testify:github.com/stretchr/testify:force \
           github.com/containerd/ttrpc:github.com/containerd/ttrpc:force \
           github.com/coreos/go-semver:github.com/coreos/go-semver:force \
           github.com/docker/go-events:github.com/docker/go-events:force \
           github.com/go-errors/errors:github.com/go-errors/errors:force \
           github.com/jackc/pgpassfile:github.com/jackc/pgpassfile:force \
           github.com/josharian/intern:github.com/josharian/intern:force \
           github.com/josharian/native:github.com/josharian/native:force \
           github.com/lithammer/dedent:github.com/lithammer/dedent:force \
           github.com/mdlayher/netlink:github.com/mdlayher/netlink:force \
           github.com/mistifyio/go-zfs:github.com/mistifyio/go-zfs:force \
           github.com/vbatts/tar-split:github.com/vbatts/tar-split:force \
           google.golang.org/appengine:google.golang.org/appengine:force \
           sigs.k8s.io/kustomize/api:sigs.k8s.io/kustomize/api/api:force \
           go.etcd.io/etcd/api/v3:github.com/k3s-io/etcd/api/v3/api:force \
           go.etcd.io/etcd/pkg/v3:github.com/k3s-io/etcd/pkg/v3/pkg:force \
           github.com/coreos/go-systemd:github.com/coreos/go-systemd:force \
           github.com/gorilla/websocket:github.com/gorilla/websocket:force \
           github.com/minio/minio-go/v7:github.com/minio/minio-go/v7:force \
           github.com/yl2chen/cidranger:github.com/yl2chen/cidranger:force \
           github.com/Azure/go-ansiterm:github.com/Azure/go-ansiterm:force \
           github.com/Azure/go-autorest:github.com/Azure/go-autorest:force \
           github.com/Microsoft/hcsshim:github.com/Microsoft/hcsshim:force \
           github.com/avast/retry-go/v4:github.com/avast/retry-go/v4:force \
           github.com/cespare/xxhash/v2:github.com/cespare/xxhash/v2:force \
           github.com/containerd/go-cni:github.com/containerd/go-cni:force \
           github.com/docker/go-metrics:github.com/docker/go-metrics:force \
           github.com/felixge/httpsnoop:github.com/felixge/httpsnoop:force \
           github.com/fsnotify/fsnotify:github.com/fsnotify/fsnotify:force \
           github.com/golang-jwt/jwt/v4:github.com/golang-jwt/jwt/v4:force \
           github.com/golang/groupcache:github.com/golang/groupcache:force \
           github.com/hanwen/go-fuse/v2:github.com/hanwen/go-fuse/v2:force \
           github.com/hashicorp/errwrap:github.com/hashicorp/errwrap:force \
           github.com/karrick/godirwalk:github.com/karrick/godirwalk:force \
           github.com/liggitt/tabwriter:github.com/liggitt/tabwriter:force \
           github.com/minio/highwayhash:github.com/minio/highwayhash:force \
           github.com/minio/sha256-simd:github.com/minio/sha256-simd:force \
           github.com/mrunalp/fileutils:github.com/mrunalp/fileutils:force \
           github.com/munnerz/goautoneg:github.com/munnerz/goautoneg:force \
           github.com/pelletier/go-toml:github.com/pelletier/go-toml:force \
           github.com/prometheus/common:github.com/prometheus/common:force \
           github.com/prometheus/procfs:github.com/prometheus/procfs:force \
           github.com/vishvananda/netns:github.com/vishvananda/netns:force \
           github.com/containerd/cgroups:github.com/containerd/cgroups:force \
           github.com/coreos/go-iptables:github.com/coreos/go-iptables:force \
           github.com/flannel-io/flannel:github.com/flannel-io/flannel:force \
           github.com/klauspost/compress:github.com/klauspost/compress:force \
           github.com/JeffAshton/win_pdh:github.com/JeffAshton/win_pdh:force \
           github.com/Microsoft/go-winio:github.com/Microsoft/go-winio:force \
           github.com/containerd/console:github.com/containerd/console:force \
           github.com/containerd/go-runc:github.com/containerd/go-runc:force \
           github.com/containerd/typeurl:github.com/containerd/typeurl:force \
           github.com/dustin/go-humanize:github.com/dustin/go-humanize:force \
           github.com/evanphx/json-patch:github.com/evanphx/json-patch:force \
           github.com/fvbommel/sortorder:github.com/fvbommel/sortorder:force \
           github.com/go-task/slim-sprig:github.com/go-task/slim-sprig:force \
           github.com/klauspost/cpuid/v2:github.com/klauspost/cpuid/v2:force \
           github.com/kylelemons/godebug:github.com/kylelemons/godebug:force \
           github.com/mdlayher/genetlink:github.com/mdlayher/genetlink:force \
           github.com/modern-go/reflect2:github.com/modern-go/reflect2:force \
           github.com/peterbourgon/diskv:github.com/peterbourgon/diskv:force \
           github.com/pmezard/go-difflib:github.com/pmezard/go-difflib:force \
           github.com/shengdoushi/base58:github.com/shengdoushi/base58:force \
           github.com/stoewer/go-strcase:github.com/stoewer/go-strcase:force \
           go.etcd.io/etcd/raft/v3:github.com/k3s-io/etcd/raft/v3/raft:force \
           github.com/moby/sys/signal:github.com/moby/sys/signal/signal:force \
           github.com/Mirantis/cri-dockerd:github.com/k3s-io/cri-dockerd:force \
           github.com/containerd/containerd:github.com/k3s-io/containerd:force \
           github.com/erikdubbelboer/gspt:github.com/erikdubbelboer/gspt:force \
           github.com/go-sql-driver/mysql:github.com/go-sql-driver/mysql:force \
           github.com/opencontainers/runc:github.com/opencontainers/runc:force \
           github.com/vishvananda/netlink:github.com/vishvananda/netlink:force \
           github.com/MakeNowJust/heredoc:github.com/MakeNowJust/heredoc:force \
           github.com/NYTimes/gziphandler:github.com/NYTimes/gziphandler:force \
           github.com/canonical/go-dqlite:github.com/canonical/go-dqlite:force \
           github.com/cenkalti/backoff/v4:github.com/cenkalti/backoff/v4:force \
           github.com/chai2010/gettext-go:github.com/chai2010/gettext-go:force \
           github.com/containerd/btrfs/v2:github.com/containerd/btrfs/v2:force \
           github.com/containerd/imgcrypt:github.com/containerd/imgcrypt:force \
           github.com/containers/ocicrypt:github.com/containers/ocicrypt:force \
           github.com/docker/distribution:github.com/docker/distribution:force \
           github.com/emicklei/go-restful:github.com/emicklei/go-restful:force \
           github.com/gregjones/httpcache:github.com/gregjones/httpcache:force \
           github.com/jackc/pgservicefile:github.com/jackc/pgservicefile:force \
           github.com/jonboulle/clockwork:github.com/jonboulle/clockwork:force \
           github.com/mistifyio/go-zfs/v3:github.com/mistifyio/go-zfs/v3:force \
           github.com/syndtr/gocapability:github.com/syndtr/gocapability:force \
           go.opentelemetry.io/otel/sdk:go.opentelemetry.io/otel/sdk/sdk:force \
           sigs.k8s.io/kustomize/kyaml:sigs.k8s.io/kustomize/kyaml/kyaml:force \
           github.com/natefinch/lumberjack:github.com/natefinch/lumberjack:force \
           github.com/rancher/remotedialer:github.com/rancher/remotedialer:force \
           github.com/euank/go-kmsg-parser:github.com/euank/go-kmsg-parser:force \
           github.com/exponent-io/jsonpath:github.com/exponent-io/jsonpath:force \
           github.com/googleapis/gax-go/v2:github.com/googleapis/gax-go/v2:force \
           github.com/moby/sys/symlink:github.com/moby/sys/symlink/symlink:force \
           github.com/modern-go/concurrent:github.com/modern-go/concurrent:force \
           github.com/pquerna/cachecontrol:github.com/pquerna/cachecontrol:force \
           github.com/tchap/go-patricia/v2:github.com/tchap/go-patricia/v2:force \
           github.com/kubernetes-sigs/cri-tools:github.com/k3s-io/cri-tools:force \
           github.com/go-bindata/go-bindata:github.com/go-bindata/go-bindata:force \
           go.etcd.io/etcd/server/v3:github.com/k3s-io/etcd/server/v3/server:force \
           github.com/containerd/cgroups/v3:github.com/containerd/cgroups/v3:force \
           github.com/containerd/continuity:github.com/containerd/continuity:force \
           github.com/containerd/typeurl/v2:github.com/containerd/typeurl/v2:force \
           github.com/coreos/go-systemd/v22:github.com/coreos/go-systemd/v22:force \
           github.com/cpuguy83/go-md2man/v2:github.com/cpuguy83/go-md2man/v2:force \
           github.com/docker/go-connections:github.com/docker/go-connections:force \
           github.com/mitchellh/go-wordwrap:github.com/mitchellh/go-wordwrap:force \
           gopkg.in/natefinch/lumberjack.v2:gopkg.in/natefinch/lumberjack.v2:force \
           go.opentelemetry.io/proto/otlp:go.opentelemetry.io/proto/otlp/otlp:force \
           github.com/k3s-io/helm-controller:github.com/k3s-io/helm-controller:force \
           github.com/opencontainers/selinux:github.com/opencontainers/selinux:force \
           github.com/Azure/azure-sdk-for-go:github.com/Azure/azure-sdk-for-go:force \
           github.com/asaskevich/govalidator:github.com/asaskevich/govalidator:force \
           github.com/emicklei/go-restful/v3:github.com/emicklei/go-restful/v3:force \
           github.com/go-openapi/jsonpointer:github.com/go-openapi/jsonpointer:force \
           github.com/hashicorp/go-cleanhttp:github.com/hashicorp/go-cleanhttp:force \
           github.com/mitchellh/mapstructure:github.com/mitchellh/mapstructure:force \
           github.com/nats-io/nats-server/v2:github.com/nats-io/nats-server/v2:force \
           go.opentelemetry.io/otel/trace:go.opentelemetry.io/otel/trace/trace:force \
           golang.zx2c4.com/wireguard/wgctrl:golang.zx2c4.com/wireguard/wgctrl:force \
           go.etcd.io/etcd/client/v3:github.com/k3s-io/etcd/client/v3/client/v3:force \
           go.etcd.io/etcd/etcdutl/v3:github.com/k3s-io/etcd/etcdutl/v3/etcdutl:force \
           go.etcd.io/etcd/client/v2:github.com/k3s-io/etcd/client/v2/client/v2:force \
           github.com/rancher/dynamiclistener:github.com/rancher/dynamiclistener:force \
           github.com/containernetworking/cni:github.com/containernetworking/cni:force \
           github.com/hashicorp/go-multierror:github.com/hashicorp/go-multierror:force \
           github.com/moby/sys/mountinfo:github.com/moby/sys/mountinfo/mountinfo:force \
           github.com/prometheus/client_model:github.com/prometheus/client_model:force \
           github.com/russross/blackfriday/v2:github.com/russross/blackfriday/v2:force \
           go.opentelemetry.io/otel/metric:go.opentelemetry.io/otel/metric/metric:force \
           github.com/daviddengcn/go-colortext:github.com/daviddengcn/go-colortext:force \
           github.com/go-openapi/jsonreference:github.com/go-openapi/jsonreference:force \
           github.com/opencontainers/go-digest:github.com/opencontainers/go-digest:force \
           github.com/prometheus/client_golang:github.com/prometheus/client_golang:force \
           github.com/tmc/grpc-websocket-proxy:github.com/tmc/grpc-websocket-proxy:force \
           github.com/moby/sys/sequential:github.com/moby/sys/sequential/sequential:force \
           github.com/AdaLogics/go-fuzz-headers:github.com/AdaLogics/go-fuzz-headers:force \
           github.com/inconshreveable/mousetrap:github.com/inconshreveable/mousetrap:force \
           github.com/opencontainers/image-spec:github.com/opencontainers/image-spec:force \
           github.com/seccomp/libseccomp-golang:github.com/seccomp/libseccomp-golang:force \
           github.com/stefanberger/go-pkcs11uri:github.com/stefanberger/go-pkcs11uri:force \
           sigs.k8s.io/structured-merge-diff/v4:sigs.k8s.io/structured-merge-diff/v4:force \
           github.com/cloudnativelabs/kube-router/v2:github.com/k3s-io/kube-router/v2:force \
           github.com/cyphar/filepath-securejoin:github.com/cyphar/filepath-securejoin:force \
           github.com/hashicorp/go-retryablehttp:github.com/hashicorp/go-retryablehttp:force \
           github.com/libopenstorage/openstorage:github.com/libopenstorage/openstorage:force \
           github.com/containerd/stargz-snapshotter:github.com/k3s-io/stargz-snapshotter:force \
           go.etcd.io/etcd/client/pkg/v3:github.com/k3s-io/etcd/client/pkg/v3/client/pkg:force \
           github.com/AdamKorcz/go-118-fuzz-build:github.com/AdamKorcz/go-118-fuzz-build:force \
           github.com/bronze1man/goStrongswanVici:github.com/bronze1man/goStrongswanVici:force \
           github.com/containernetworking/plugins:github.com/containernetworking/plugins:force \
           github.com/google/go-containerregistry:github.com/google/go-containerregistry:force \
           github.com/grpc-ecosystem/grpc-gateway:github.com/grpc-ecosystem/grpc-gateway:force \
           github.com/monochromegane/go-gitignore:github.com/monochromegane/go-gitignore:force \
           github.com/opencontainers/runtime-spec:github.com/opencontainers/runtime-spec:force \
           github.com/Azure/go-autorest/logger:github.com/Azure/go-autorest/logger/logger:force \
           github.com/opencontainers/runtime-tools:github.com/opencontainers/runtime-tools:force \
           sigs.k8s.io/kustomize/kustomize/v5:sigs.k8s.io/kustomize/kustomize/v5/kustomize:force \
           github.com/Azure/go-autorest/tracing:github.com/Azure/go-autorest/tracing/tracing:force \
           github.com/checkpoint-restore/go-criu/v5:github.com/checkpoint-restore/go-criu/v5:force \
           github.com/grpc-ecosystem/grpc-gateway/v2:github.com/grpc-ecosystem/grpc-gateway/v2:force \
           github.com/Azure/go-autorest/autorest:github.com/Azure/go-autorest/autorest/autorest:force \
           github.com/rootless-containers/rootlesskit:github.com/rootless-containers/rootlesskit:force \
           k8s.io/api:github.com/k3s-io/kubernetes/staging/src/k8s.io/api/staging/src/k8s.io/api:force \
           k8s.io/kms:github.com/k3s-io/kubernetes/staging/src/k8s.io/kms/staging/src/k8s.io/kms:force \
           github.com/container-storage-interface/spec:github.com/container-storage-interface/spec:force \
           github.com/docker/docker-credential-helpers:github.com/docker/docker-credential-helpers:force \
           github.com/grpc-ecosystem/go-grpc-middleware:github.com/grpc-ecosystem/go-grpc-middleware:force \
           github.com/grpc-ecosystem/go-grpc-prometheus:github.com/grpc-ecosystem/go-grpc-prometheus:force \
           github.com/Azure/go-autorest/autorest/to:github.com/Azure/go-autorest/autorest/to/autorest/to:force \
           github.com/containerd/fuse-overlayfs-snapshotter:github.com/containerd/fuse-overlayfs-snapshotter:force \
           k8s.io/cri-api:github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api/staging/src/k8s.io/cri-api:force \
           k8s.io/kubectl:github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl/staging/src/k8s.io/kubectl:force \
           github.com/matttproud/golang_protobuf_extensions:github.com/matttproud/golang_protobuf_extensions:force \
           k8s.io/kubelet:github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet/staging/src/k8s.io/kubelet:force \
           k8s.io/metrics:github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics/staging/src/k8s.io/metrics:force \
           github.com/antlr/antlr4/runtime/Go/antlr:github.com/antlr/antlr4/runtime/Go/antlr/runtime/Go/antlr:force \
           github.com/Azure/go-autorest/autorest/adal:github.com/Azure/go-autorest/autorest/adal/autorest/adal:force \
           github.com/Azure/go-autorest/autorest/date:github.com/Azure/go-autorest/autorest/date/autorest/date:force \
           github.com/GoogleCloudPlatform/k8s-cloud-provider:github.com/GoogleCloudPlatform/k8s-cloud-provider:force \
           github.com/Azure/go-autorest/autorest/mocks:github.com/Azure/go-autorest/autorest/mocks/autorest/mocks:force \
           k8s.io/apiserver:github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver/staging/src/k8s.io/apiserver:force \
           k8s.io/client-go:github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go/staging/src/k8s.io/client-go:force \
           github.com/containerd/stargz-snapshotter/estargz:github.com/containerd/stargz-snapshotter/estargz/estargz:force \
           k8s.io/kube-proxy:github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy/staging/src/k8s.io/kube-proxy:force \
           k8s.io/cli-runtime:github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime/staging/src/k8s.io/cli-runtime:force \
           k8s.io/mount-utils:github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils/staging/src/k8s.io/mount-utils:force \
           k8s.io/apimachinery:github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery/staging/src/k8s.io/apimachinery:force \
           github.com/Azure/go-autorest/autorest/validation:github.com/Azure/go-autorest/autorest/validation/autorest/validation:force \
           k8s.io/cloud-provider:github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider/staging/src/k8s.io/cloud-provider:force \
           k8s.io/component-base:github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base/staging/src/k8s.io/component-base:force \
           k8s.io/code-generator:github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator/staging/src/k8s.io/code-generator:force \
           k8s.io/kube-scheduler:github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler/staging/src/k8s.io/kube-scheduler:force \
           k8s.io/kube-aggregator:github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator/staging/src/k8s.io/kube-aggregator:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace:go.opentelemetry.io/otel/exporters/otlp/otlptrace/exporters/otlp/otlptrace:force \
           k8s.io/cluster-bootstrap:github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap/staging/src/k8s.io/cluster-bootstrap:force \
           k8s.io/component-helpers:github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers/staging/src/k8s.io/component-helpers:force \
           k8s.io/controller-manager:github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager/staging/src/k8s.io/controller-manager:force \
           sigs.k8s.io/apiserver-network-proxy/konnectivity-client:sigs.k8s.io/apiserver-network-proxy/konnectivity-client/konnectivity-client:force \
           k8s.io/csi-translation-lib:github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib/staging/src/k8s.io/csi-translation-lib:force \
           github.com/container-orchestrated-devices/container-device-interface:github.com/container-orchestrated-devices/container-device-interface:force \
           go.opentelemetry.io/otel/exporters/otlp/internal/retry:go.opentelemetry.io/otel/exporters/otlp/internal/retry/exporters/otlp/internal/retry:force \
           k8s.io/legacy-cloud-providers:github.com/k3s-io/kubernetes/staging/src/k8s.io/legacy-cloud-providers/staging/src/k8s.io/legacy-cloud-providers:force \
           k8s.io/pod-security-admission:github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission/staging/src/k8s.io/pod-security-admission:force \
           k8s.io/apiextensions-apiserver:github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver/staging/src/k8s.io/apiextensions-apiserver:force \
           k8s.io/kube-controller-manager:github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager/staging/src/k8s.io/kube-controller-manager:force \
           go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp:go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp/instrumentation/net/http/otelhttp:force \
           k8s.io/dynamic-resource-allocation:github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation/staging/src/k8s.io/dynamic-resource-allocation:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc:go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc/exporters/otlp/otlptrace/otlptracegrpc:force \
           go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc:go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc/instrumentation/google.golang.org/grpc/otelgrpc:force \
           go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful:go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful/instrumentation/github.com/emicklei/go-restful/otelrestful:force"

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
