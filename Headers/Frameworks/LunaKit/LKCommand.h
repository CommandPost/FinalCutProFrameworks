//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSValidatedUserInterfaceItem.h"

@class NSArray, NSBundle, NSColor, NSEvent, NSImage, NSString;

@interface LKCommand : NSObject <NSCopying, NSValidatedUserInterfaceItem>
{
    NSBundle *_bundle;
    NSString *_identifier;
    void *_proReserved1;
    NSString *_name;
    NSString *_description;
    SEL _downSelector;
    long long _downTag;
    BOOL _downRepeats;
    unsigned long long _repeatCount;
    SEL _upSelector;
    long long _upTag;
    BOOL _upEnabled;
    unsigned long long _iconIndex;
    unsigned long long _sharedIconIndex;
    NSEvent *_currentEvent;
    id _representedObject;
    NSArray *_groupIdentifiers;
    NSImage *_dragImage;
    BOOL _wantAppKit_handleKeyEquivalent;
    void *_proReserved3;
    void *_proReserved4;
    NSColor *detailedDescriptionTextColor;
}

+ (id)appIcons;
- (void)setWantAppKit_handleKeyEquivalent:(BOOL)arg1;
- (BOOL)wantAppKit_handleKeyEquivalent;
- (id)_groupNames;
- (id)_groups;
- (id)keyEquivalents;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (long long)upTag;
- (SEL)upSelector;
- (unsigned long long)repeatCount;
- (BOOL)downRepeats;
- (long long)downTag;
- (SEL)downSelector;
@property(readonly) long long tag;
@property(readonly) SEL action;
- (id)_dragImage;
- (id)icon;
- (id)groupIdentifiers;
- (void)_setDetailedDescription:(id)arg1;
- (id)detailedDescriptionTextColor;
- (id)detailedDescription;
- (id)identifier;
- (void)_setName:(id)arg1;
- (id)name;
- (void)_setCanPerformKeyUp:(BOOL)arg1;
- (BOOL)_canPerformKeyUp;
- (void)_resetRepeatCount;
- (void)_incrementRepeatCount;
- (void)_setCurrentEvent:(id)arg1;
- (id)_currentEvent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCommandIdentifier:(id)arg1 dictionary:(id)arg2 bundle:(id)arg3;
- (id)initWithCommandIdentifier:(id)arg1 dictionary:(id)arg2;

@end

