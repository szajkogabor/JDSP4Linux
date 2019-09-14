#ifndef CONFIGLIST_H
#define CONFIGLIST_H


#include <string>

enum Config {
    enable,
    analogmodelling_enable,
    analogmodelling_tubedrive,
    bass_enable,
    bass_mode,
    bass_filtertype,
    bass_freq,
    headset_enable,
    headset_preset,
    stereowide_enable,
    stereowide_scoeff,
    stereowide_mcoeff,
    bs2b_enable,
    bs2b_fcut,
    bs2b_feed,
    compression_enable,
    compression_pregain,
    compression_threshold,
    compression_knee,
    compression_ratio,
    compression_attack,
    compression_release,
    tone_enable,
    tone_filtertype,
    tone_eq,
    masterswitch_limthreshold,
    masterswitch_limrelease,
    ddc_enable,
    ddc_file,
    unknown
};
enum AppConfig {
    configpath,
    autoapply,
    autoapplymode,
    glavafix,
    stylesheet,
    thememode,
    colorpalette,
    custompalette,
    customwhiteicons,
    theme,
    borderpadding,
    unknownApp
};
inline Config resolveConfig(const std::string& input) {
    if( input == "enable" ) return enable;
    if( input == "analogmodelling_enable" ) return analogmodelling_enable;
    if( input == "analogmodelling_tubedrive" ) return analogmodelling_tubedrive;
    if( input == "bass_enable" ) return bass_enable;
    if( input == "bass_mode" ) return bass_mode;
    if( input == "bass_filtertype" ) return bass_filtertype;
    if( input == "bass_freq" ) return bass_freq;
    if( input == "headset_enable" ) return headset_enable;
    if( input == "headset_preset" ) return headset_preset;
    if( input == "stereowide_enable" ) return stereowide_enable;
    if( input == "stereowide_scoeff" ) return stereowide_scoeff;
    if( input == "stereowide_mcoeff" ) return stereowide_mcoeff;
    if( input == "bs2b_enable" ) return bs2b_enable;
    if( input == "bs2b_feed" ) return bs2b_feed;
    if( input == "bs2b_fcut" ) return bs2b_fcut;
    if( input == "compression_enable" ) return compression_enable;
    if( input == "compression_pregain" ) return compression_pregain;
    if( input == "compression_threshold" ) return compression_threshold;
    if( input == "compression_knee" ) return compression_knee;
    if( input == "compression_ratio" ) return compression_ratio;
    if( input == "compression_attack" ) return compression_attack;
    if( input == "compression_release" ) return compression_release;
    if( input == "tone_enable" ) return tone_enable;
    if( input == "tone_filtertype" ) return tone_filtertype;
    if( input == "tone_eq" ) return tone_eq;
    if( input == "masterswitch_limthreshold" ) return masterswitch_limthreshold;
    if( input == "masterswitch_limrelease" ) return masterswitch_limrelease;
    if( input == "ddc_enable" ) return ddc_enable;
    if( input == "ddc_file" ) return ddc_file;
   return unknown;
}
inline AppConfig resolveAppConfig(const std::string& input) {
    if( input == "configpath" ) return configpath;
    if( input == "autoapply" ) return autoapply;
    if( input == "autoapplymode" ) return autoapplymode;
    if( input == "glavafix" ) return glavafix;
    if( input == "stylesheet" ) return stylesheet;
    if( input == "borderpadding" ) return borderpadding;
    if( input == "thememode" ) return thememode;
    if( input == "colorpalette" ) return colorpalette;
    if( input == "customwhiteicons" ) return customwhiteicons;
    if( input == "custompalette" ) return custompalette;
    if( input == "theme" ) return theme;
   return unknownApp;
}

static std::string default_config = "enable=true\nanalogmodelling_enable=false\nanalogmodelling_tubedrive=10000\nbass_enable=false\nbass_mode=1000\nbass_filtertype=1\nbass_freq=65\nheadset_enable=false\nheadset_preset=10\nstereowide_enable=false\nstereowide_mode=4\nbs2b_enable=false\nbs2b_mode=2\ncompression_enable=false\ncompression_pregain=20\ncompression_threshold=-60\ncompression_knee=40\ncompression_ratio=-20\ncompression_attack=1\ncompression_release=88\ntone_enable=false\ntone_filtertype=0\ntone_eq=\"0;0;0;0;0;0;0;0;0;0;0;0;0;0;0\"\nmasterswitch_limthreshold=0\nmasterswitch_limrelease=50\nddc_enable=false\nddc_file=\"none\"\nbs2b_fcut=300\nbs2b_feed=78\nstereowide_mcoeff=1000\nstereowide_scoeff=400\n";
static std::string default_appconfig = "configspath=\"\"\nautoapply=false\nglavafix=false\nmuteOnRestart=true";
#endif // CONFIGLIST_H
