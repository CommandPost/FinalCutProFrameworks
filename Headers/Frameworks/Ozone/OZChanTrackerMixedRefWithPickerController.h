//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZChanObjectRefWithPickerController.h>

@interface OZChanTrackerMixedRefWithPickerController : OZChanObjectRefWithPickerController
{
}

- (BOOL)doesAllowLink:(struct OZObjectManipulator *)arg1;
- (void)buildDummyMenu;
- (void)buildMenu:(struct OZChannelBase *)arg1;
- (id)addMenuItem:(struct OZObjectManipulator *)arg1 ignoreObjID:(unsigned int)arg2 inputMenu:(id)arg3;
- (id)buildObjectMenu:(id)arg1 ignoreObjID:(unsigned int)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

