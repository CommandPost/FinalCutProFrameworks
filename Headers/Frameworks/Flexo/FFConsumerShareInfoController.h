//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKSetting, CKSource, LKTextField, NSString, NSTimer, NSView;

__attribute__((visibility("hidden")))
@interface FFConsumerShareInfoController : NSObject
{
    CKSource *_source;
    CKSetting *_setting;
    NSView *_clipDurationImageView;
    LKTextField *_clipDurationTextField;
    NSView *_outputFileSizeImageView;
    NSView *_outputFileSizeTextView;
    LKTextField *_outputFileSizeTextField;
    NSView *_compatibilityImageView;
    BOOL _observing;
    NSTimer *_outputFileSizeAnimationTimer;
}

+ (id)propertiesDependentOnStompSettingProperties;
+ (id)keyPathsForValuesAffectingOutputFileSizeToolTip;
+ (id)keyPathsForValuesAffectingOutputFileSize;
+ (id)keyPathsForValuesAffectingClipDuration;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(nonatomic) NSView *compatibilityImageView; // @synthesize compatibilityImageView=_compatibilityImageView;
@property(nonatomic) LKTextField *outputFileSizeTextField; // @synthesize outputFileSizeTextField=_outputFileSizeTextField;
@property(retain, nonatomic) NSView *outputFileSizeTextView; // @synthesize outputFileSizeTextView=_outputFileSizeTextView;
@property(retain, nonatomic) NSView *outputFileSizeImageView; // @synthesize outputFileSizeImageView=_outputFileSizeImageView;
@property(nonatomic) LKTextField *clipDurationTextField; // @synthesize clipDurationTextField=_clipDurationTextField;
@property(nonatomic) NSView *clipDurationImageView; // @synthesize clipDurationImageView=_clipDurationImageView;
@property(retain, nonatomic) CKSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
- (void)animateOutputFileSizeWithTimer:(id)arg1;
- (id)contentsAnimationWithLayer:(id)arg1 infoBarIcon:(long long)arg2;
- (id)contentsAnimation;
- (id)infoBarIcon:(long long)arg1 state:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)stopObservingStompSettings:(id)arg1;
- (void)startObservingStompSettings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)centerVisibleInfo:(struct CGRect)arg1;
@property(readonly, nonatomic) NSString *outputFileSizeToolTip;
@property(readonly, nonatomic) NSString *outputFileSize;
@property(readonly, nonatomic) NSString *clipDuration;
- (void)dealloc;
- (void)awakeFromNib;

@end

