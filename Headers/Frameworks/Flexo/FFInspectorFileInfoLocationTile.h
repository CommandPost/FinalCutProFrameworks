//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorFileInfoBaseTile.h>

@class LKButton, LKTextField, NSImageView, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorFileInfoLocationTile : FFInspectorFileInfoBaseTile
{
    NSImageView *_imageView;
    NSString *_mediaPath;
    LKButton *_revealInFinderButton;
    LKTextField *_location;
    LKTextField *_locationTitle;
}

@property LKTextField *locationTitle; // @synthesize locationTitle=_locationTitle;
@property LKTextField *location; // @synthesize location=_location;
@property LKButton *revealInFinderButton; // @synthesize revealInFinderButton=_revealInFinderButton;
- (void)revealButtonPressed:(id)arg1;
- (void)updateWithRefs:(id)arg1 items:(id)arg2 forOwner:(id)arg3;
- (void)awakeFromNib;
- (void)dealloc;

@end

