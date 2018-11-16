//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

@class LKTextField;

__attribute__((visibility("hidden")))
@interface FFShareDestinationAppPreviewController : FFShareDestinationController
{
    LKTextField *_resolutionTextField;
    LKTextField *_qualityTextField;
}

@property(nonatomic) LKTextField *qualityTextField; // @synthesize qualityTextField=_qualityTextField;
@property(nonatomic) LKTextField *resolutionTextField; // @synthesize resolutionTextField=_resolutionTextField;
- (struct CGSize)optimalVideoResolution;
- (BOOL)isAppStorePreview;
- (void)awakeFromNib;
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;

@end
