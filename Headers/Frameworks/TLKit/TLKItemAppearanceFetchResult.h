//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString, TLKItemComponentInfo;

@interface TLKItemAppearanceFetchResult : NSObject
{
    BOOL _shouldHighlightComponent;
    int _containmentTypeMask;
    int _componentType;
    TLKItemComponentInfo *_itemComponent;
    NSColor *_backgroundColor;
    NSString *_displayName;
    NSString *_editableName;
    NSString *_accessibilityDisplayName;
    CDStruct_e83c9415 _timeRangeLimits;
}

@property int componentType; // @synthesize componentType=_componentType;
@property int containmentTypeMask; // @synthesize containmentTypeMask=_containmentTypeMask;
@property BOOL shouldHighlightComponent; // @synthesize shouldHighlightComponent=_shouldHighlightComponent;
@property(copy) NSString *accessibilityDisplayName; // @synthesize accessibilityDisplayName=_accessibilityDisplayName;
@property(copy) NSString *editableName; // @synthesize editableName=_editableName;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property CDStruct_e83c9415 timeRangeLimits; // @synthesize timeRangeLimits=_timeRangeLimits;
@property(retain) TLKItemComponentInfo *itemComponent; // @synthesize itemComponent=_itemComponent;
- (void)dealloc;

@end

