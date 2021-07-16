
#######################################
#  Step One: set up your environment  #
#######################################

You have two options here, the lazy way or the non-lazy way.

Automatic way (recommended!):
-- Grab a repo with some useful scripts, and run the needed one
sudo apt-get install git-core
git clone https://github.com/akhilnarang/scripts
cd scripts
ls
bash setup/android_build_env.sh



-- Install build tools
sudo apt-get install bc bison build-essential ccache curl flex \
g++-multilib gcc-multilib git-core gnupg gperf imagemagick lib32ncurses5-dev \
lib32z-dev libc6-dev-i386 libgl1-mesa-dev libssl-dev libx11-dev \
libxml2-utils unzip x11proto-core-dev xsltproc zip zlib1g-dev




######################################
#  Step Two: Configure Repo and Git  #
######################################


git config --global user.name "Bharat Singh"
git config --global user.email "Bharatsingh1008@yahoo.com"


#####################################
#  Step Three: Download the source  #
#####################################


mkdir ~/pe
cd ~/pe

##########################

mkdir pe
cd pe
repo init --depth=1 -u https://github.com/PixelExperience/manifest -b eleven-plus
repo sync -c -j$(nproc --all) --force-sync --no-clone-bundle --no-tags

############### Repo takes 9 miniuites and updating takes3-4 min ###################
=====================================================================================
git clone https://github.com/BharatSingh1008/android_device_xiaomi_tulip.git -b 11 device/xiaomi/tulip
git clone https://github.com/BharatSingh1008/android_device_xiaomi_sdm660-common.git -b 11 device/xiaomi/sdm660-common
git clone https://github.com/BharatSingh1008/android_kernel_xiaomi_sdm660.git -b 11 kernel/xiaomi/sdm660 --depth=1
git clone https://github.com/BharatSingh1008/vendor_xiaomi.git -b 11 vendor/xiaomi


##########################
#  Step Four: Build it!  #
##########################

. build/envsetup.sh
lunch aosp_tulip-userdebug
make -j2 aapt        {takes about 5-7 min }
mka bacon -j4  & mka bacon -j8
lets try with 32/30 or 16
mka bacon -j16  & mka bacon -j32   mka bacon -j30


################## Upload #############
sftp bharatsingh1008@frs.sourceforge.net

cd /home/frs/project/pe-plus-edition-tulip/
put

##########################################
##########################################
          AUTO KEYBOARD SCRIPT
##########################################
##########################################


Press l for 0 seconds Pause 500 Milliseconds
Press s for 0 seconds Pause 500 Milliseconds
Press {ENTER} for 0 seconds Pause 1560000 Milliseconds
