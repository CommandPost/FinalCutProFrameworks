//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFEffect, LKButton, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectCheckbox : NSObject
{
    NSString *_name;
    FFEffect *_effect;
    LKButton *_checkbox;
    BOOL _inset;
    BOOL _intrinsic;
    BOOL _video;
    int _elementType;
}

@property(nonatomic) int elementType; // @synthesize elementType=_elementType;
@property(nonatomic) BOOL video; // @synthesize video=_video;
@property(nonatomic) BOOL intrinsic; // @synthesize intrinsic=_intrinsic;
@property(nonatomic) BOOL inset; // @synthesize inset=_inset;
@property(nonatomic) LKButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) FFEffect *effect; // @synthesize effect=_effect;
@property(nonatomic) NSString *name; // @synthesize name=_name;

@end
