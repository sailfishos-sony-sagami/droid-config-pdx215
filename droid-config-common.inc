%define vendor sony
%define rpm_vendor sony
%define vendor_pretty Sony

%define out_of_image_files 1

%define android_version_major 14

# Device-specific ofono configuration
Provides: ofono-configs
Obsoletes: ofono-configs-mer
Obsoletes: ofono-configs-binder

