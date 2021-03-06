menuentry "Start Fedora Workstation Live" {
  bootoptions="iso-scan/filename=$iso_path root=live:CDLABEL=$cd_label rd.live.image quiet"
  linux (loop)/isolinux/vmlinuz $bootoptions
  initrd (loop)/isolinux/initrd.img
}
menuentry "Start Fedora Workstation Live in basic graphics mode" {
  bootoptions="iso-scan/filename=$iso_path root=live:CDLABEL=$cd_label rd.live.image nomodeset quiet"
  linux (loop)/isolinux/vmlinuz $bootoptions
  initrd (loop)/isolinux/initrd.img
}
menuentry "Test this media & start Fedora Workstation Live" {
  bootoptions="iso-scan/filename=$iso_path root=live:CDLABEL=$cd_label rd.live.image rd.live.check quiet"
  linux (loop)/isolinux/vmlinuz $bootoptions
  initrd (loop)/isolinux/initrd.img
}
menuentry "Run a memory test" {
  bootoptions=""
  linux16 (loop)/isolinux/memtest $bootoptions
}
