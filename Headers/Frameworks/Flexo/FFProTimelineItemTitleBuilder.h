//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject;

__attribute__((visibility("hidden")))
@interface FFProTimelineItemTitleBuilder : NSObject
{
    int _clipDisplayContents;
    FFAnchoredObject *_itemComponent;
}

@property(nonatomic) int clipDisplayContents; // @synthesize clipDisplayContents=_clipDisplayContents;
@property(retain, nonatomic) FFAnchoredObject *itemComponent; // @synthesize itemComponent=_itemComponent;
- (id)namesOfItemRoles;
- (id)titleForItemAngle;
- (id)buildTitle;
- (void)dealloc;

@end

