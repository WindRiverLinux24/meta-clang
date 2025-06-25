do_fetch() {
        :
}
do_fetch[noexec] = "1"
do_unpack() {
        :
}
do_unpack[noexec] = "1"
deltask do_patch

SRC_URI = ""

do_configure[depends] += "llvm-project-source-${PV}:do_patch"
do_populate_lic[depends] += "llvm-project-source-${PV}:do_unpack"
do_create_spdx[depends] += "llvm-project-source-${PV}:do_patch"
