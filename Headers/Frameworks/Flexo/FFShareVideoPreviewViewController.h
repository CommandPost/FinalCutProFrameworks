//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CALayer, CKSource, FFShareVideoPreviewTimeConverter, NSLayoutConstraint, NSTrackingArea, NSView;

__attribute__((visibility("hidden")))
@interface FFShareVideoPreviewViewController : NSViewController
{
    double _previewTime;
    BOOL _doesSupportAudio;
    NSView *_previewView;
    CKSource *_source;
    id <FFSharePanelDelegate> _delegate;
    NSLayoutConstraint *_previewViewWidthConstraint;
    NSLayoutConstraint *_previewViewHeightConstraint;
    CALayer *_skimmerLayer;
    NSTrackingArea *_previewTrackingArea;
    FFShareVideoPreviewTimeConverter *_timeConverter;
}

@property(retain, nonatomic) FFShareVideoPreviewTimeConverter *timeConverter; // @synthesize timeConverter=_timeConverter;
@property(retain, nonatomic) NSTrackingArea *previewTrackingArea; // @synthesize previewTrackingArea=_previewTrackingArea;
@property(retain, nonatomic) CALayer *skimmerLayer; // @synthesize skimmerLayer=_skimmerLayer;
@property(retain, nonatomic) NSLayoutConstraint *previewViewHeightConstraint; // @synthesize previewViewHeightConstraint=_previewViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *previewViewWidthConstraint; // @synthesize previewViewWidthConstraint=_previewViewWidthConstraint;
@property(nonatomic) id <FFSharePanelDelegate> delegate; // @synthesize delegate=_delegate;
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
- (struct CGRect)initialSkimmerFrame;
- (id)makeSkimmerLayer;
- (void)configureSkimmerLayer;
- (id)previewLayerFromDelegate;
- (void)_updateVideoPlayerScreenID;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)configurePreviewLayer;
- (BOOL)canDelegateProvidePreviewLayer;
- (void)configurePreviewView;
- (void)viewDidLoad;
- (void)viewDidLayout;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

