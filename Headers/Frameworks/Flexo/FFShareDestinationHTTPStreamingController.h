//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

@class LKButton, NSButton;

@interface FFShareDestinationHTTPStreamingController : FFShareDestinationController
{
    LKButton *_cellularBtn;
    LKButton *_wifiBtn;
    LKButton *_broadBandBtn;
    NSButton *_fragmentedMP4Button;
}

@property(nonatomic) NSButton *fragmentedMP4Button; // @synthesize fragmentedMP4Button=_fragmentedMP4Button;
@property(nonatomic) LKButton *broadBandBtn; // @synthesize broadBandBtn=_broadBandBtn;
@property(nonatomic) LKButton *wifiBtn; // @synthesize wifiBtn=_wifiBtn;
@property(nonatomic) LKButton *cellularBtn; // @synthesize cellularBtn=_cellularBtn;
- (void)chooseFileType:(id)arg1;
- (void)toggleSelectedSetting:(id)arg1;
- (id)initWithDestination:(id)arg1 withSources:(id)arg2;
- (void)awakeFromNib;
- (long long)controlStateWithStompIndex:(unsigned long long)arg1;

@end

