//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextFieldDelegate.h"

@class NSSearchField, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface FFSearchController : NSObject <NSTextFieldDelegate>
{
    NSView *_view;
    NSTextField *_infoLabel;
    NSSearchField *_searchField;
    id <FFSearchControllerDelegate> _delegate;
    BOOL _active;
}

- (void)searchFieldControlTextDidChangeNotification:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSView *view;
@property(readonly, nonatomic) NSString *searchString;
@property(copy, nonatomic) NSString *infoString;
- (void)dealloc;
- (id)predicateForSearchInProperty:(id)arg1;
@property(nonatomic) BOOL active;
@property(nonatomic) id <FFSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;

@end

