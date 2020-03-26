[ -f /home/panda/Projects/panda-fm/src/pcmanfm-qt.desktop.in ] || exit 0
echo '[lxqt.pcmanfm-qt_desktop]'
echo 'type = DESKTOP'
echo 'source_lang = en'
echo 'source_file = src/pcmanfm-qt.desktop.in'
echo 'file_filter = src/translations/pcmanfm-qt_<lang>.desktop'
echo ''
