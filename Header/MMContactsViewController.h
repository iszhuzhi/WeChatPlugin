//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt.h"
#import "IContactMgrExt.h"
#import "IMMFriendRequestMgrExt.h"
#import "MMContactListContactRowViewDelegate.h"
#import "MMFavoriteItemViewerWindowDelegate.h"
#import "MMSidebarOutlineViewDelegate.h"
#import "MMSidebarRowViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSSearchFieldDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"
#import "WeChatSearchProtocol.h"

@class FavoritesItem, MMContactListContactRowView, MMContactListLogic, MMContactsSidebarItem, MMPreviewPanel, MMSearchField, MMSearchViewController, MMSessionPickerWindow, MMSidebarOutlineView, MMTableView, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMContactsViewController : MMViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, MMSidebarOutlineViewDelegate, IMMFriendRequestMgrExt, IContactMgrExt, MMContactListContactRowViewDelegate, NSTableViewDataSource, NSTableViewDelegate, MMSidebarRowViewDelegate, NSTextFieldDelegate, NSSearchFieldDelegate, AccountServiceExt, MMFavoriteItemViewerWindowDelegate, MMTableViewDelegate, WeChatSearchProtocol>
{
    MMSidebarOutlineView *_outlineView;
    MMContactsSidebarItem *_rootItem;
    MMContactsSidebarItem *_allItem;
    MMContactsSidebarItem *_tagsItem;
    MMContactsSidebarItem *_selectedItem;
    MMContactListLogic *_logic;
    MMContactListContactRowView *_rowViewForContextMenu;
    MMSessionPickerWindow *_sessionPickerWindow;
    NSMutableArray *_friendRequestList;
    BOOL _isSearching;
    BOOL _isStartLoadingGroupMember;
    MMSearchField *_searchField;
    MMTableView *_listTableView;
    MMSearchViewController *_searchViewController;
    MMPreviewPanel *_previewPanel;
    FavoritesItem *_previewingFavItem;
    long long _lastSelectedRow;
    NSArray *_listDataForTableView;
}

@property(retain, nonatomic) NSArray *listDataForTableView; // @synthesize listDataForTableView=_listDataForTableView;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(retain, nonatomic) FavoritesItem *previewingFavItem; // @synthesize previewingFavItem=_previewingFavItem;
@property(retain, nonatomic) MMPreviewPanel *previewPanel; // @synthesize previewPanel=_previewPanel;
@property(retain, nonatomic) MMSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) __weak MMTableView *listTableView; // @synthesize listTableView=_listTableView;
@property __weak MMSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)handleAppFontSize;
- (void)_showConfirmForDeleteContact:(id)arg1;
- (void)startShareContact:(id)arg1;
- (void)_contextMenuDeleteContact:(id)arg1;
- (void)_contextMenuShareContact:(id)arg1;
- (void)_contextMenuMessageContact:(id)arg1;
- (void)openedContextMenuForContactRow:(id)arg1;
- (id)contextMenuForContactRow:(id)arg1;
- (void)siderbarGotMouseDown:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)searchTextChanged:(id)arg1;
- (void)_clearSearch;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)doGroupRowSelectedChanged:(id)arg1 rowInfo:(id)arg2 index:(long long)arg3;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)_showSelectedTableRow;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_appendTag:(id)arg1;
- (void)_appendFavoritesHeading;
- (void)_appendFriendRequest:(id)arg1;
- (void)_showAllContacts;
- (void)_setDisplayedAllRowsForTableView:(BOOL)arg1;
- (void)setDisplayedContacts:(id)arg1 preserveSelection:(BOOL)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)friendRequestMgr:(id)arg1 didChangeFriendRequestUnreadCount:(unsigned long long)arg2;
- (void)onModifyUserImage:(id)arg1;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)performSearchAction;
- (id)acceptableDragTypesForOutlineView:(id)arg1;
- (void)item:(id)arg1 didRecieveDragOperation:(id)arg2 inOutlineView:(id)arg3;
- (BOOL)item:(id)arg1 canRecieveDragOperation:(id)arg2 inOutlineView:(id)arg3;
- (void)deleteTagFromSidebar:(id)arg1;
- (id)menuForItem:(id)arg1 inOutlineView:(id)arg2;
- (BOOL)isFirstOneOfFriendRequests:(id)arg1;
- (void)_updateGroupChatMemberDetailIfNeed;
- (id)getListForItem:(id)arg1;
- (void)setTabbarItem:(id)arg1;
- (void)_updateBadge;
- (id)_makeTagItemsWithContactTags:(id)arg1;
- (void)_selectPreviousTableRow;
- (void)_selectPreviouslySelectedItem;
- (id)title;
- (void)showContactWithUserName:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

