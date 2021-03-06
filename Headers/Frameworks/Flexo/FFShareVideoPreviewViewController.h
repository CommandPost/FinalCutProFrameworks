//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CALayer, CKSource, FFShareVideoPreviewTimeConverter, NSLayoutConstraint, NSTrackingArea, NSView, PCWeakPointerValue;
@protocol FFSharePanelDelegate;

__attribute__((visibility("hidden")))
@interface FFShareVideoPreviewViewController : NSViewController
{
    double _previewTime;
    BOOL _doesSupportAudio;
    NSView *_previewView;
    CKSource *_source;
    NSLayoutConstraint *_previewViewWidthConstraint;
    NSLayoutConstraint *_previewViewHeightConstraint;
    CALayer *_skimmerLayer;
    NSTrackingArea *_previewTrackingArea;
    FFShareVideoPreviewTimeConverter *_timeConverter;
    PCWeakPointerValue *_weakDelegate;
}

@property(retain, nonatomic) PCWeakPointerValue *weakDelegate; // @synthesize weakDelegate=_weakDelegate;
@property(retain, nonatomic) FFShareVideoPreviewTimeConverter *timeConverter; // @synthesize timeConverter=_timeConverter;
@property(retain, nonatomic) NSTrackingArea *previewTrackingArea; // @synthesize previewTrackingArea=_previewTrackingArea;
@property(retain, nonatomic) CALayer *skimmerLayer; // @synthesize skimmerLayer=_skimmerLayer;
@property(retain, nonatomic) NSLayoutConstraint *previewViewHeightConstraint; // @synthesize previewViewHeightConstraint=_previewViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewViewWidthConstraint; // @synthesize previewViewWidthConstraint=_previewViewWidthConstraint;
@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
@property(nonatomic) BOOL doesSupportAudio; // @synthesize doesSupportAudio=_doesSupportAudio;
@property(retain, nonatomic) NSView *previewView; // @synthesize previewView=_previewView;
- (void)hideSkimmer;
- (void)showSkimmer;
- (void)setVideoToTimeCorrespondingToMousePosition:(double)arg1;
- (void)refreshVideoPreviewWithoutRebuildingContext;
- (void)skimWithMousePosition:(double)arg1;
- (void)stopSkimming;
- (BOOL)isPointWithinVideo:(struct CGPoint)arg1;
- (struct CGPoint)mousePositionWithEvent:(id)arg1;
- (void)skimWithEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)refreshPreviewVideo;
- (struct CGPoint)determineSkimmerPosition;
- (void)transactionUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateSkimmerPosition;
- (void)haveDelegateSetPreviewTime:(BOOL)arg1;
@property(nonatomic) double previewTime;
- (void)viewWillAppear;
- (id)makeTrackingArea;
- (void)setupTrackingArea;
- (void)updateSkimmerHeight;
- (struct CGRect)initialSkimmerFrame;
- (id)makeSkimmerLayer;
- (void)configureSkimmerLayer;
- (id)previewLayerFromDelegate;
- (void)_updateVideoPlayerScreenID;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)configurePreviewLayer;
- (BOOL)canDelegateProvidePreviewLayer;
- (BOOL)sourceHasImage;
- (struct CGRect)calculateSourceDisplayBounds;
- (void)configurePreviewView;
- (void)viewDidLoad;
@property(nonatomic) id <FFSharePanelDelegate> delegate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

