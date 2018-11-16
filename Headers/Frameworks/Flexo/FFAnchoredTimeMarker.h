//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredMarker.h>

__attribute__((visibility("hidden")))
@interface FFAnchoredTimeMarker : FFAnchoredMarker
{
    BOOL _isTodo;
    BOOL _isCompleted;
    BOOL _isSelected;
    BOOL _isHighlighted;
    BOOL _isHidden;
    BOOL _isActive;
    BOOL _displayNameIsDefault;
}

+ (id)copyClassDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)type;
- (id)trackType;
@property(nonatomic) BOOL isTodo; // @synthesize isTodo=_isTodo;
@property(nonatomic) BOOL isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(nonatomic) BOOL displayNameIsDefault; // @synthesize displayNameIsDefault=_displayNameIsDefault;

@end
