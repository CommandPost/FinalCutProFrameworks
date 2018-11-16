//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FFAudioUnitInfoFromCoreAudio : NSObject
{
    struct AudioComponentDescription _description;
    struct OpaqueAudioComponent *_component;
    int _validationResult;
    int _validationStatus;
    BOOL _validationComplete;
    BOOL _validationTimedOut;
    NSDictionary *_configInfo;
}

+ (id)infoForComponent:(struct OpaqueAudioComponent *)arg1;
- (id).cxx_construct;
- (BOOL)passedValidation;
- (BOOL)_validationComplete;
- (void)_setValidationTimedOut;
- (void)_setValidationCompleted:(int)arg1 validationResult:(int)arg2;
- (int)validationResult;
- (BOOL)sandboxSafe;
- (void)setConfigurationInfo:(id)arg1;
- (id)configurationInfo;
- (struct OpaqueAudioComponent *)component;
- (struct AudioComponentDescription)componentDescription;
- (void)dealloc;
- (id)initForComponent:(struct OpaqueAudioComponent *)arg1;

@end

