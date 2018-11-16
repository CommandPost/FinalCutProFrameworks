//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFColorBaseViewController.h>

@class LKButton;

__attribute__((visibility("hidden")))
@interface FFColorFolderParameterController : FFColorBaseViewController
{
    LKButton *_resetButton;
    LKButton *_addCorrectionButton;
    LKButton *_disclosureButton;
}

- (void)toggleDisclosure:(id)arg1;
- (void)addCorrection:(id)arg1;
- (void)reset:(id)arg1;
- (void)didTwiddle:(BOOL)arg1;
- (void)mouseExitedRow:(id)arg1;
- (void)mouseEnteredRow:(id)arg1;
- (void)update;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

