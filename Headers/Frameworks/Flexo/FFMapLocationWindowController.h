//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"

@class LKSearchField, MapLocation, NSArrayController, NSMutableArray, NSString, NSTableView, NewKeywordTextField, NoClickTextField;

@interface FFMapLocationWindowController : NSWindowController <NSTableViewDataSource>
{
    NSTableView *m_noneTableView;
    NSTableView *m_citiesTableView;
    NSArrayController *m_citiesArrayController;
    LKSearchField *m_searchField;
    NewKeywordTextField *m_labelField;
    NoClickTextField *m_placeholderMessage;
    NSMutableArray *m_cities;
    NSString *m_selectedCityName;
    MapLocation *m_initialLocation;
    CDUnknownBlockType m_completionHandler;
}

+ (id)sharedInstance;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)doubleClickInTableView:(id)arg1;
- (void)cancel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)requestLocation:(id)arg1 anchoredToRect:(struct CGRect)arg2 inParentWindow:(id)arg3 allowNoLocation:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)popoverDidResignKey:(id)arg1;
- (void)closePopoverAndAcceptChanges:(BOOL)arg1;
- (void)setCityName:(id)arg1;
- (id)cityName;
@property(retain, nonatomic) NSString *selectedCityName;
@property(retain, nonatomic) NSMutableArray *cities;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)searchTextDidChange:(id)arg1;
- (id)locationOfSelectedCity;
- (int)indexOfCityWithLatitude:(float)arg1 longitude:(float)arg2;
- (id)mapLocationNearest:(CDStruct_2c43369c)arg1;
- (id)mapLocationForCity:(id)arg1 country:(id)arg2;
- (void)addAirportsToArray:(id)arg1;
- (void)addWorldCitiesToArray:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

@end

