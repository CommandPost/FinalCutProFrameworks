//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTool.h>

@interface OZEyeDropperTool : OZTool
{
    id _pTarget;
    OZTool *_pPrevTool;
    OZTool *_pPrevLastTool;
    struct OZChannelBase *_pAssociatedChan;
    BOOL _isHUD;
}

- (void)dealloc;
- (id)getName;
- (id)getImageName;
- (id)getTooltip;
- (struct PCUUID)getClassID;
- (id)getDefaultCursor;
- (BOOL)displayDefaultOnScreenControls;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)isOneShotTool;
- (void)becomeCurrentForCanvas:(id)arg1 andTarget:(id)arg2;
- (void)sampleColor:(id)arg1;
- (void)revertToPreviousTool;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAssociatedChannel:(struct OZChannelBase *)arg1 andIsHUD:(BOOL)arg2;
- (struct OZChannelBase *)associatedChannel;
- (BOOL)isHUD;

@end
