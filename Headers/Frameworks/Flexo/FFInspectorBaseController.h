//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorBaseController : NSObject
{
    FFInspectorBaseController *_parentController;
    NSView *_view;
    NSString *_identifier;
    struct {
        unsigned int nibIsLoading:1;
        unsigned int nibWasLoaded:1;
    } _ifibt_flags;
}

+ (id)viewNibName;
@property(nonatomic) FFInspectorBaseController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) NSView *view; // @dynamic view;
@property(readonly) NSString *identifier; // @dynamic identifier;
- (void)dealloc;
- (id)outerMostContainer;
- (id)container;

@end

