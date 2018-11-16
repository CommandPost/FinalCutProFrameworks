//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class LKWhatsNewFeatureEntry, NSImageView, NSTextView;

@interface LKWelcomeScreenFeatureViewController : NSViewController
{
    LKWhatsNewFeatureEntry *_feature;
    NSImageView *_iconImageView;
    NSTextView *_nameDetailsTextView;
}

@property(nonatomic) NSTextView *nameDetailsTextView; // @synthesize nameDetailsTextView=_nameDetailsTextView;
@property(nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) LKWhatsNewFeatureEntry *feature; // @synthesize feature=_feature;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupAttributedStrings;
- (id)initWithFeature:(id)arg1;

@end
