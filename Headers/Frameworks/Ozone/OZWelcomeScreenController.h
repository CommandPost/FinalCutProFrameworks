//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class LKBox, LKButton, NSImageView, NSMatrix, OZMovieViewToo;

@interface OZWelcomeScreenController : NSWindowController
{
    NSMatrix *startOptionMatrix;
    LKBox *quickTourBox;
    LKBox *tutorialBox;
    LKBox *templateBrowserBox;
    LKBox *newProjectBox;
    NSImageView *quickTourImage;
    NSImageView *tutorialImage;
    NSImageView *templateBrowserImage;
    NSImageView *newProjectImage;
    LKButton *welcomeScreenVisibleButton;
    OZMovieViewToo *movieView;
}

+ (id)sharedController;
- (id)init;
- (void)dealloc;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)selectOption:(id)arg1;
- (void)performClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)documentWillOpen:(id)arg1;
- (void)updateBoxes:(unsigned long long)arg1;

@end
