//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZPresetManager.h>

@interface OZProjectPresetManager : OZPresetManager
{
}

+ (id)sharedInstance;
- (id)init;
- (Class)presetClass;
- (id)alwaysUseDefaultPresetKey;
- (id)defaultPresetKey;
- (int)presetIndexForDocument:(struct OZDocument *)arg1;
- (id)presetMatchingSize:(struct CGSize)arg1;
- (id)presetMatchingSize:(struct CGSize)arg1 andFrameRate:(double)arg2;
- (id)presetForName:(id)arg1;

@end

