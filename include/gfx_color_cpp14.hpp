#ifndef HTCW_GFX_COLOR_CPP14_HPP
#define HTCW_GFX_COLOR_CPP14_HPP
#include "gfx_core.hpp"
#include "gfx_pixel.hpp"
namespace gfx {
        // predefined color values
        template<typename PixelType>
        struct color final {
                // we use a super precise max-bit RGB pixel for this
                using source_type = rgb_pixel<HTCW_MAX_WORD>;
                constexpr static const PixelType alice_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.941176470588235, 0.972549019607843, 1));
                constexpr static const PixelType antique_white = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.980392156862745, 0.92156862745098, 0.843137254901961));
                constexpr static const PixelType aqua = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 1, 1));
                constexpr static const PixelType aquamarine = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.498039215686275, 1, 0.831372549019608));
                constexpr static const PixelType azure = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.941176470588235, 1, 1));
                constexpr static const PixelType beige = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.96078431372549, 0.96078431372549, 0.862745098039216));
                constexpr static const PixelType bisque = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.894117647058824, 0.768627450980392));
                constexpr static const PixelType black = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0, 0));
                constexpr static const PixelType blanched_almond = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.92156862745098, 0.803921568627451));
                constexpr static const PixelType blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0, 1));
                constexpr static const PixelType blue_violet = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.541176470588235, 0.168627450980392, 0.886274509803922));
                constexpr static const PixelType brown = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.647058823529412, 0.164705882352941, 0.164705882352941));
                constexpr static const PixelType burly_wood = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.870588235294118, 0.72156862745098, 0.529411764705882));
                constexpr static const PixelType cadet_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.372549019607843, 0.619607843137255, 0.627450980392157));
                constexpr static const PixelType chartreuse = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.498039215686275, 1, 0));
                constexpr static const PixelType chocolate = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.823529411764706, 0.411764705882353, 0.117647058823529));
                constexpr static const PixelType coral = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.498039215686275, 0.313725490196078));
                constexpr static const PixelType cornflower_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.392156862745098, 0.584313725490196, 0.929411764705882));
                constexpr static const PixelType cornsilk = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.972549019607843, 0.862745098039216));
                constexpr static const PixelType crimson = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.862745098039216, 0.0784313725490196, 0.235294117647059));
                constexpr static const PixelType cyan = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 1, 1));
                constexpr static const PixelType dark_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0, 0.545098039215686));
                constexpr static const PixelType dark_cyan = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.545098039215686, 0.545098039215686));
                constexpr static const PixelType dark_goldenrod = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.72156862745098, 0.525490196078431, 0.0431372549019608));
                constexpr static const PixelType dark_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.662745098039216, 0.662745098039216, 0.662745098039216));
                constexpr static const PixelType dark_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.392156862745098, 0));
                constexpr static const PixelType dark_khaki = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.741176470588235, 0.717647058823529, 0.419607843137255));
                constexpr static const PixelType dark_magenta = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.545098039215686, 0, 0.545098039215686));
                constexpr static const PixelType dark_olive_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.333333333333333, 0.419607843137255, 0.184313725490196));
                constexpr static const PixelType dark_orange = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.549019607843137, 0));
                constexpr static const PixelType dark_orchid = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.6, 0.196078431372549, 0.8));
                constexpr static const PixelType dark_red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.545098039215686, 0, 0));
                constexpr static const PixelType dark_salmon = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.913725490196078, 0.588235294117647, 0.47843137254902));
                constexpr static const PixelType dark_sea_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.56078431372549, 0.737254901960784, 0.545098039215686));
                constexpr static const PixelType dark_slate_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.282352941176471, 0.23921568627451, 0.545098039215686));
                constexpr static const PixelType dark_slate_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.184313725490196, 0.309803921568627, 0.309803921568627));
                constexpr static const PixelType dark_turquoise = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.807843137254902, 0.819607843137255));
                constexpr static const PixelType dark_violet = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.580392156862745, 0, 0.827450980392157));
                constexpr static const PixelType deep_pink = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.0784313725490196, 0.576470588235294));
                constexpr static const PixelType deep_sky_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.749019607843137, 1));
                constexpr static const PixelType dim_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.411764705882353, 0.411764705882353, 0.411764705882353));
                constexpr static const PixelType dodger_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.117647058823529, 0.564705882352941, 1));
                constexpr static const PixelType firebrick = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.698039215686274, 0.133333333333333, 0.133333333333333));
                constexpr static const PixelType floral_white = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.980392156862745, 0.941176470588235));
                constexpr static const PixelType forest_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.133333333333333, 0.545098039215686, 0.133333333333333));
                constexpr static const PixelType fuchsia = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0, 1));
                constexpr static const PixelType gainsboro = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.862745098039216, 0.862745098039216, 0.862745098039216));
                constexpr static const PixelType ghost_white = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.972549019607843, 0.972549019607843, 1));
                constexpr static const PixelType gold = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.843137254901961, 0));
                constexpr static const PixelType goldenrod = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.854901960784314, 0.647058823529412, 0.125490196078431));
                constexpr static const PixelType gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.501960784313725, 0.501960784313725, 0.501960784313725));
                constexpr static const PixelType green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.501960784313725, 0));
                constexpr static const PixelType green_yellow = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.67843137254902, 1, 0.184313725490196));
                constexpr static const PixelType honeydew = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.941176470588235, 1, 0.941176470588235));
                constexpr static const PixelType hot_pink = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.411764705882353, 0.705882352941177));
                constexpr static const PixelType indian_red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.803921568627451, 0.36078431372549, 0.36078431372549));
                constexpr static const PixelType indigo = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.294117647058824, 0, 0.509803921568627));
                constexpr static const PixelType ivory = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 1, 0.941176470588235));
                constexpr static const PixelType khaki = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.941176470588235, 0.901960784313726, 0.549019607843137));
                constexpr static const PixelType lavender = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.901960784313726, 0.901960784313726, 0.980392156862745));
                constexpr static const PixelType lavender_blush = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.941176470588235, 0.96078431372549));
                constexpr static const PixelType lawn_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.486274509803922, 0.988235294117647, 0));
                constexpr static const PixelType lemon_chiffon = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.980392156862745, 0.803921568627451));
                constexpr static const PixelType light_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.67843137254902, 0.847058823529412, 0.901960784313726));
                constexpr static const PixelType light_coral = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.941176470588235, 0.501960784313725, 0.501960784313725));
                constexpr static const PixelType light_cyan = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.87843137254902, 1, 1));
                constexpr static const PixelType light_goldenrod_yellow = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.980392156862745, 0.980392156862745, 0.823529411764706));
                constexpr static const PixelType light_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.564705882352941, 0.933333333333333, 0.564705882352941));
                constexpr static const PixelType light_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.827450980392157, 0.827450980392157, 0.827450980392157));
                constexpr static const PixelType light_pink = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.713725490196078, 0.756862745098039));
                constexpr static const PixelType light_salmon = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.627450980392157, 0.47843137254902));
                constexpr static const PixelType light_sea_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.125490196078431, 0.698039215686274, 0.666666666666667));
                constexpr static const PixelType light_sky_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.529411764705882, 0.807843137254902, 0.980392156862745));
                constexpr static const PixelType light_slate_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.466666666666667, 0.533333333333333, 0.6));
                constexpr static const PixelType light_steel_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.690196078431373, 0.768627450980392, 0.870588235294118));
                constexpr static const PixelType light_yellow = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 1, 0.87843137254902));
                constexpr static const PixelType lime = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 1, 0));
                constexpr static const PixelType lime_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.196078431372549, 0.803921568627451, 0.196078431372549));
                constexpr static const PixelType linen = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.980392156862745, 0.941176470588235, 0.901960784313726));
                constexpr static const PixelType magenta = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0, 1));
                constexpr static const PixelType maroon = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.501960784313725, 0, 0));
                constexpr static const PixelType medium_aquamarine = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.4, 0.803921568627451, 0.666666666666667));
                constexpr static const PixelType medium_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0, 0.803921568627451));
                constexpr static const PixelType medium_orchid = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.729411764705882, 0.333333333333333, 0.827450980392157));
                constexpr static const PixelType medium_purple = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.576470588235294, 0.43921568627451, 0.858823529411765));
                constexpr static const PixelType medium_sea_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.235294117647059, 0.701960784313725, 0.443137254901961));
                constexpr static const PixelType medium_slate_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.482352941176471, 0.407843137254902, 0.933333333333333));
                constexpr static const PixelType medium_spring_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.980392156862745, 0.603921568627451));
                constexpr static const PixelType medium_turquoise = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.282352941176471, 0.819607843137255, 0.8));
                constexpr static const PixelType medium_violet_red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.780392156862745, 0.0823529411764706, 0.52156862745098));
                constexpr static const PixelType midnight_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.0980392156862745, 0.0980392156862745, 0.43921568627451));
                constexpr static const PixelType mint_cream = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.96078431372549, 1, 0.980392156862745));
                constexpr static const PixelType misty_rose = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.894117647058824, 0.882352941176471));
                constexpr static const PixelType moccasin = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.894117647058824, 0.709803921568627));
                constexpr static const PixelType navajo_white = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.870588235294118, 0.67843137254902));
                constexpr static const PixelType navy = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0, 0.501960784313725));
                constexpr static const PixelType old_lace = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.992156862745098, 0.96078431372549, 0.901960784313726));
                constexpr static const PixelType olive = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.501960784313725, 0.501960784313725, 0));
                constexpr static const PixelType olive_drab = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.419607843137255, 0.556862745098039, 0.137254901960784));
                constexpr static const PixelType orange = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.647058823529412, 0));
                constexpr static const PixelType orange_red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.270588235294118, 0));
                constexpr static const PixelType orchid = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.854901960784314, 0.43921568627451, 0.83921568627451));
                constexpr static const PixelType pale_goldenrod = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.933333333333333, 0.909803921568627, 0.666666666666667));
                constexpr static const PixelType pale_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.596078431372549, 0.984313725490196, 0.596078431372549));
                constexpr static const PixelType pale_turquoise = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.686274509803922, 0.933333333333333, 0.933333333333333));
                constexpr static const PixelType pale_violet_red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.858823529411765, 0.43921568627451, 0.576470588235294));
                constexpr static const PixelType papaya_whip = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.937254901960784, 0.835294117647059));
                constexpr static const PixelType peach_puff = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.854901960784314, 0.725490196078431));
                constexpr static const PixelType peru = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.803921568627451, 0.52156862745098, 0.247058823529412));
                constexpr static const PixelType pink = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.752941176470588, 0.796078431372549));
                constexpr static const PixelType plum = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.866666666666667, 0.627450980392157, 0.866666666666667));
                constexpr static const PixelType powder_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.690196078431373, 0.87843137254902, 0.901960784313726));
                constexpr static const PixelType purple = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.501960784313725, 0, 0.501960784313725));
                constexpr static const PixelType red = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0, 0));
                constexpr static const PixelType rosy_brown = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.737254901960784, 0.56078431372549, 0.56078431372549));
                constexpr static const PixelType royal_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.254901960784314, 0.411764705882353, 0.882352941176471));
                constexpr static const PixelType saddle_brown = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.545098039215686, 0.270588235294118, 0.0745098039215686));
                constexpr static const PixelType salmon = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.980392156862745, 0.501960784313725, 0.447058823529412));
                constexpr static const PixelType sandy_brown = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.956862745098039, 0.643137254901961, 0.376470588235294));
                constexpr static const PixelType sea_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.180392156862745, 0.545098039215686, 0.341176470588235));
                constexpr static const PixelType sea_shell = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.96078431372549, 0.933333333333333));
                constexpr static const PixelType sienna = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.627450980392157, 0.32156862745098, 0.176470588235294));
                constexpr static const PixelType silver = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.752941176470588, 0.752941176470588, 0.752941176470588));
                constexpr static const PixelType sky_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.529411764705882, 0.807843137254902, 0.92156862745098));
                constexpr static const PixelType slate_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.415686274509804, 0.352941176470588, 0.803921568627451));
                constexpr static const PixelType slate_gray = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.43921568627451, 0.501960784313725, 0.564705882352941));
                constexpr static const PixelType snow = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.980392156862745, 0.980392156862745));
                constexpr static const PixelType spring_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 1, 0.498039215686275));
                constexpr static const PixelType steel_blue = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.274509803921569, 0.509803921568627, 0.705882352941177));
                constexpr static const PixelType tan = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.823529411764706, 0.705882352941177, 0.549019607843137));
                constexpr static const PixelType teal = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0, 0.501960784313725, 0.501960784313725));
                constexpr static const PixelType thistle = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.847058823529412, 0.749019607843137, 0.847058823529412));
                constexpr static const PixelType tomato = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 0.388235294117647, 0.27843137254902));
                constexpr static const PixelType turquoise = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.250980392156863, 0.87843137254902, 0.815686274509804));
                constexpr static const PixelType violet = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.933333333333333, 0.509803921568627, 0.933333333333333));
                constexpr static const PixelType wheat = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.96078431372549, 0.870588235294118, 0.701960784313725));
                constexpr static const PixelType white = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 1, 1));
                constexpr static const PixelType white_smoke = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.96078431372549, 0.96078431372549, 0.96078431372549));
                constexpr static const PixelType yellow = convert<source_type,PixelType>(color<PixelType>::source_type(true, 1, 1, 0));
                constexpr static const PixelType yellow_green = convert<source_type,PixelType>(color<PixelType>::source_type(true, 0.603921568627451, 0.803921568627451, 0.196078431372549));
        };
                template<typename PixelType> constexpr const PixelType color<PixelType>::alice_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::antique_white;
        template<typename PixelType> constexpr const PixelType color<PixelType>::aqua;
        template<typename PixelType> constexpr const PixelType color<PixelType>::aquamarine;
        template<typename PixelType> constexpr const PixelType color<PixelType>::azure;
        template<typename PixelType> constexpr const PixelType color<PixelType>::beige;
        template<typename PixelType> constexpr const PixelType color<PixelType>::bisque;
        template<typename PixelType> constexpr const PixelType color<PixelType>::black;
        template<typename PixelType> constexpr const PixelType color<PixelType>::blanched_almond;
        template<typename PixelType> constexpr const PixelType color<PixelType>::blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::blue_violet;
        template<typename PixelType> constexpr const PixelType color<PixelType>::brown;
        template<typename PixelType> constexpr const PixelType color<PixelType>::burly_wood;
        template<typename PixelType> constexpr const PixelType color<PixelType>::cadet_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::chartreuse;
        template<typename PixelType> constexpr const PixelType color<PixelType>::chocolate;
        template<typename PixelType> constexpr const PixelType color<PixelType>::coral;
        template<typename PixelType> constexpr const PixelType color<PixelType>::cornflower_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::cornsilk;
        template<typename PixelType> constexpr const PixelType color<PixelType>::crimson;
        template<typename PixelType> constexpr const PixelType color<PixelType>::cyan;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_cyan;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_goldenrod;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_khaki;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_magenta;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_olive_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_orange;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_orchid;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_salmon;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_sea_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_slate_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_slate_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_turquoise;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dark_violet;
        template<typename PixelType> constexpr const PixelType color<PixelType>::deep_pink;
        template<typename PixelType> constexpr const PixelType color<PixelType>::deep_sky_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dim_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::dodger_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::firebrick;
        template<typename PixelType> constexpr const PixelType color<PixelType>::floral_white;
        template<typename PixelType> constexpr const PixelType color<PixelType>::forest_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::fuchsia;
        template<typename PixelType> constexpr const PixelType color<PixelType>::gainsboro;
        template<typename PixelType> constexpr const PixelType color<PixelType>::ghost_white;
        template<typename PixelType> constexpr const PixelType color<PixelType>::gold;
        template<typename PixelType> constexpr const PixelType color<PixelType>::goldenrod;
        template<typename PixelType> constexpr const PixelType color<PixelType>::gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::green_yellow;
        template<typename PixelType> constexpr const PixelType color<PixelType>::honeydew;
        template<typename PixelType> constexpr const PixelType color<PixelType>::hot_pink;
        template<typename PixelType> constexpr const PixelType color<PixelType>::indian_red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::indigo;
        template<typename PixelType> constexpr const PixelType color<PixelType>::ivory;
        template<typename PixelType> constexpr const PixelType color<PixelType>::khaki;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lavender;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lavender_blush;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lawn_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lemon_chiffon;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_coral;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_cyan;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_goldenrod_yellow;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_pink;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_salmon;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_sea_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_sky_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_slate_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_steel_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::light_yellow;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lime;
        template<typename PixelType> constexpr const PixelType color<PixelType>::lime_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::linen;
        template<typename PixelType> constexpr const PixelType color<PixelType>::magenta;
        template<typename PixelType> constexpr const PixelType color<PixelType>::maroon;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_aquamarine;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_orchid;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_purple;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_sea_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_slate_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_spring_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_turquoise;
        template<typename PixelType> constexpr const PixelType color<PixelType>::medium_violet_red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::midnight_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::mint_cream;
        template<typename PixelType> constexpr const PixelType color<PixelType>::misty_rose;
        template<typename PixelType> constexpr const PixelType color<PixelType>::moccasin;
        template<typename PixelType> constexpr const PixelType color<PixelType>::navajo_white;
        template<typename PixelType> constexpr const PixelType color<PixelType>::navy;
        template<typename PixelType> constexpr const PixelType color<PixelType>::old_lace;
        template<typename PixelType> constexpr const PixelType color<PixelType>::olive;
        template<typename PixelType> constexpr const PixelType color<PixelType>::olive_drab;
        template<typename PixelType> constexpr const PixelType color<PixelType>::orange;
        template<typename PixelType> constexpr const PixelType color<PixelType>::orange_red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::orchid;
        template<typename PixelType> constexpr const PixelType color<PixelType>::pale_goldenrod;
        template<typename PixelType> constexpr const PixelType color<PixelType>::pale_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::pale_turquoise;
        template<typename PixelType> constexpr const PixelType color<PixelType>::pale_violet_red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::papaya_whip;
        template<typename PixelType> constexpr const PixelType color<PixelType>::peach_puff;
        template<typename PixelType> constexpr const PixelType color<PixelType>::peru;
        template<typename PixelType> constexpr const PixelType color<PixelType>::pink;
        template<typename PixelType> constexpr const PixelType color<PixelType>::plum;
        template<typename PixelType> constexpr const PixelType color<PixelType>::powder_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::purple;
        template<typename PixelType> constexpr const PixelType color<PixelType>::red;
        template<typename PixelType> constexpr const PixelType color<PixelType>::rosy_brown;
        template<typename PixelType> constexpr const PixelType color<PixelType>::royal_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::saddle_brown;
        template<typename PixelType> constexpr const PixelType color<PixelType>::salmon;
        template<typename PixelType> constexpr const PixelType color<PixelType>::sandy_brown;
        template<typename PixelType> constexpr const PixelType color<PixelType>::sea_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::sea_shell;
        template<typename PixelType> constexpr const PixelType color<PixelType>::sienna;
        template<typename PixelType> constexpr const PixelType color<PixelType>::silver;
        template<typename PixelType> constexpr const PixelType color<PixelType>::sky_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::slate_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::slate_gray;
        template<typename PixelType> constexpr const PixelType color<PixelType>::snow;
        template<typename PixelType> constexpr const PixelType color<PixelType>::spring_green;
        template<typename PixelType> constexpr const PixelType color<PixelType>::steel_blue;
        template<typename PixelType> constexpr const PixelType color<PixelType>::tan;
        template<typename PixelType> constexpr const PixelType color<PixelType>::teal;
        template<typename PixelType> constexpr const PixelType color<PixelType>::thistle;
        template<typename PixelType> constexpr const PixelType color<PixelType>::tomato;
        template<typename PixelType> constexpr const PixelType color<PixelType>::turquoise;
        template<typename PixelType> constexpr const PixelType color<PixelType>::violet;
        template<typename PixelType> constexpr const PixelType color<PixelType>::wheat;
        template<typename PixelType> constexpr const PixelType color<PixelType>::white;
        template<typename PixelType> constexpr const PixelType color<PixelType>::white_smoke;
        template<typename PixelType> constexpr const PixelType color<PixelType>::yellow;
        template<typename PixelType> constexpr const PixelType color<PixelType>::yellow_green;
        using color_max = color<rgb_pixel<HTCW_MAX_WORD>>;
}
#endif