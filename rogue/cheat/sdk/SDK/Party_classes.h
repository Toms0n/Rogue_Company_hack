#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Party.Chatroom
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                         // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxChatRoomRetries;                                        // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumChatRoomRetries;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KBWZ[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(155);
		return ptr;
	}



};

// Class Party.SocialManager
// 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData_D2RQ[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USocialToolkit*>                      SocialToolkits;                                            // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialDebugTools*                           SocialDebugTools;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NZIK[0x140];                                   // 0x0060(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(156);
		return ptr;
	}



};

// Class Party.SocialParty
// 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData_HZ2D[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReservationBeaconClientClass;                              // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SpectatorBeaconClientClass;                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BJ4F[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                         // 0x0078(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                           // 0x00A0(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                          // 0x00C8(0x0050) (NativeAccessSpecifierPrivate)
	bool                                               bEnableAutomaticPartyRejoin;                               // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4XMK[0x77];                                    // 0x0119(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APartyBeaconClient*                          ReservationBeaconClient;                                   // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KOTQ[0x8];                                     // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                     // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C72Z[0xF8];                                    // 0x01A8(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(157);
		return ptr;
	}



};

// Class Party.PartyMember
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData_UY6M[0x40];                                    // 0x0028(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USocialUser*                                 SocialUser;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A1ZE[0x80];                                    // 0x0070(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(158);
		return ptr;
	}



};

// Class Party.SocialToolkit
// 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData_ICG4[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USocialUser*                                 LocalUser;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                         AllUsers;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JBIS[0x50];                                    // 0x0078(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocalPlayer*                                LocalPlayerOwner;                                          // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialChatManager*                          SocialChatManager;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_850B[0x118];                                   // 0x00D8(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(159);
		return ptr;
	}



};

// Class Party.SocialChatManager
// 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData_EU1V[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                                // 0x0078(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FString, class USocialChatRoom*>       ChatRoomsById;                                             // 0x00C8(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                             // 0x0118(0x0050) (NativeAccessSpecifierPrivate)
	bool                                               bEnableChatSlashCommands;                                  // 0x0168(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H9XM[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                             // 0x0170(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OTBH[0x60];                                    // 0x01C0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(160);
		return ptr;
	}



};

// Class Party.SocialChatChannel
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class USocialChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData_HZEQ[0xC0];                                    // 0x0028(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(161);
		return ptr;
	}



};

// Class Party.SocialChatRoom
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class USocialChatRoom : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData_Q9FP[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(162);
		return ptr;
	}



};

// Class Party.SocialDebugTools
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class USocialDebugTools : public UObject
{
public:
	unsigned char                                      UnknownData_P9RN[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(163);
		return ptr;
	}



};

// Class Party.SocialGroupChannel
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                                 SocialUser;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                            GroupId;                                                   // 0x0030(0x0028) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayName;                                               // 0x0058(0x0018) (NativeAccessSpecifierPrivate)
	TArray<class USocialUser*>                         Members;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9Q5X[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(164);
		return ptr;
	}



};

// Class Party.SocialPartyChatRoom
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class USocialPartyChatRoom : public USocialChatRoom
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(165);
		return ptr;
	}



};

// Class Party.SocialPrivateMessageChannel
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                                // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(166);
		return ptr;
	}



};

// Class Party.SocialReadOnlyChatChannel
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(167);
		return ptr;
	}



};

// Class Party.SocialSettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                           // 0x0028(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DefaultMaxPartySize;                                       // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bPreferPlatformInvites;                                    // 0x003C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bMustSendPrimaryInvites;                                   // 0x003D(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLeavePartyOnDisconnect;                                   // 0x003E(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5OAG[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserListAutoUpdateRate;                                    // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MinNicknameLength;                                         // 0x0044(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxNicknameLength;                                         // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WIV0[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(168);
		return ptr;
	}



};

// Class Party.SocialUser
// 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
class USocialUser : public UObject
{
public:
	unsigned char                                      UnknownData_SQ99[0x140];                                   // 0x0028(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(169);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
