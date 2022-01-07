enum Buttons
{
	Button_A = 0xC1,
	Button_B = 0xC3,
	Button_X = 0xC2,
	Button_Y = 0xC0,
	Button_Back = 0xBF,
	Button_L1 = 0xC4,
	Button_L2 = 0xC6,
	Button_L3 = 0xC8,
	Button_R1 = 0xC5,
	Button_R2 = 0xC7,
	Button_R3 = 0xC9,
	Dpad_Up = 0xCA,
	Dpad_Down = 0xCB,
	Dpad_Left = 0xCC,
	Dpad_Right = 0xCD
};

enum RCEMenus {
	RCEMenu_CUSTOMSCRIPT,
	RCEMenu_VCAHax,
	RCEMenu_APII,
	RCEMenu_Paradise
};

enum ScaleformButtons
{
	ARROW_UP,
	ARROW_DOWN,
	ARROW_LEFT,
	ARROW_RIGHT,
	BUTTON_DPAD_UP,
	BUTTON_DPAD_DOWN,
	BUTTON_DPAD_RIGHT,
	BUTTON_DPAD_LEFT,
	BUTTON_DPAD_BLANK,
	BUTTON_DPAD_ALL,
	BUTTON_DPAD_UP_DOWN,
	BUTTON_DPAD_LEFT_RIGHT,
	BUTTON_LSTICK_UP,
	BUTTON_LSTICK_DOWN,
	BUTTON_LSTICK_LEFT,
	BUTTON_LSTICK_RIGHT,
	BUTTON_LSTICK,
	BUTTON_LSTICK_ALL,
	BUTTON_LSTICK_UP_DOWN,
	BUTTON_LSTICK_LEFT_RIGHT,
	BUTTON_LSTICK_ROTATE,
	BUTTON_RSTICK_UP,
	BUTTON_RSTICK_DOWN,
	BUTTON_RSTICK_LEFT,
	BUTTON_RSTICK_RIGHT,
	BUTTON_RSTICK,
	BUTTON_RSTICK_ALL,
	BUTTON_RSTICK_UP_DOWN,
	BUTTON_RSTICK_LEFT_RIGHT,
	BUTTON_RSTICK_ROTATE,
	BUTTON_A,
	BUTTON_B,
	BUTTON_X,
	BUTTON_Y,
	BUTTON_LB,
	BUTTON_LT,
	BUTTON_RB,
	BUTTON_RT,
	BUTTON_START,
	BUTTON_BACK,
	RED_BOX,
	RED_BOX_1,
	RED_BOX_2,
	RED_BOX_3,
	LOADING_HALF_CIRCLE_LEFT,
	ARROW_UP_DOWN,
	ARROW_LEFT_RIGHT,
	ARROW_ALL,
	LOADING_HALF_CIRCLE_LEFT_2,
	SAVE_HALF_CIRCLE_LEFT,
	LOADING_HALF_CIRCLE_RIGHT,
};

enum Submenus
{
	Closed,
	Main_Menu,
	Players_List,
	Player_Options,
	Player_Options_Props,
	Player_Options_Props_Attach,
	Player_Options_Props_Select,
	Player_Bodyguards,
	Player_Options_Troll,
	Player_Options_Weapon,
	Player_Options_Vehicle,
	Player_Options_Teleport,
	Player_Options_Troll_Blame,
	Player_Options_Mini_Menu,
	Player_Options_Money_Bag_Type,
	Player_RP_Menu,
	Player_Options_Mini_Menu_Menu,
	Weapon_Options,
	Forge_Menu,
	Creation_Management,
	Creator_Mode,
	Rope_Player_Menu,
	Hydroulics_Options,
	Recovery_Menu,
	Self_Options,
	Modder_Protection_Options,
	Modder_Protection_Event_List_Options,
	Modder_Protection_Location_Spoofer,
	Model_Menu,
	Lobby_Options,
	Entity_Main_Options,
	Entity_Sub_Options,
	Entity_Sub_Options_List_Peds,
	Entity_Set_As_Bodyguard_Options,
	Entity_Attach_To_Player_List,
	Entity_Attack_Player_List,
	Entity_Anim_List,
	Self_Options_Components,
	Self_Options_Components_List,
	Forge_Attach_List,
	Forge_Menu_Object_List,
	Forge_Menu_Object_List_Short,
	Forge_Menu_Object_List_All,
	Forge_Menu_Object_List_Favorites,
	Forge_Menu_Movement,
	Forge_Menu_Variables,
	Forge_Attach_List_Parts,
	Forge_Attach_Player_Auto_List,
	RCE_Mods_StatFileSelector,
	Vehicle_Options,
	Vehicle_Regular_Mods,
	Vehicle_ModShop,
	Vehicle_Modshop_Sub,
	Vehicle_Modshop_Parts,
	Vehicle_Modshop_Colors,
	Vehicle_Modshop_Colors_RGB,
	Vehicle_Spawner_Main,
	Vehicle_Spawner_Main_All,
	Vehicle_Extras,
	Super_Cars,
	Sports_Cars,
	Sports_Classic_Cars,
	Muscle_Cars,
	Sedans,
	Coupes,
	Compacts,
	SUVs_and_Trucks,
	Offroad_Vehicles,
	Vans,
	Emergency_Vehicles,
	Service_Vehicles,
	Military_Vehicles,
	Motorcycles,
	Bicycles,
	Commercial_Vehicles,
	Helicopters,
	Planes,
	Boats,
	Trailers,
	Teleport_Options,
	Weather_Options,
	Weather_Options_Player,
	Vision_Options,
	Settings,
	RCE_Mods,
	RCE_Mods_Init,
	RCE_Mods_Mods,
	RCE_Mods_PlayerChooser,
	RCE_Mods_KickList,
	RCE_Mods_MenuInjector,
	RCE_Mods_ModelChanger,
	RCE_Mods_MenuSelector,
	RCE_Mods_MenuSelectorCustom,
	RCE_Mods_OutfitList,
	RCE_Mods_OutfitModifier,
	ModLoaderMenu,
	RemotePlayers,
	RemotePlayerOptions,
	Settings_Banners,
	Settings_Body,
	Settings_Scroller,
	Settings_Indicators,
	DebuggerMenu,
	Animation_Options,
	Superhero_Options,
	Teleport_Multiplayer_Locations,
	Teleport_Singleplayer_Locations,
	Teleport_Landmarks_Locations,
	Teleport_Favorites,
	Traffic_Options,
	Name_Change_Options,
	Text_Message_Options,
	UpdateLog_Menu,
	Donators_Menu,
	Money_Generator_Menu,
	Money_Generator_Menu_Players,
	player_animations_menu,
	player_animations_2_menu,
	Pre_Built_Structures_Menu,
	Event_Creator,
	Event_Arg_Editor,
	RTMTool_Menu,
	All_Client_Stats,
	FPS_Manager,
	Timecycle_Options,
	Rockstar_Developer_Options,
	Rockstar_Messages_Options,
	Rockstar_Cash_Options,
	Rockstar_XP_Options,
	Rockstar_Messages_List,
	spooner_menu,
	spooner_map_list_menu,
	spooner_veh_list_menu,
};

enum keyboardTypes {
	knull1,
	knull2,
	knull3,
	knull4,
	knull5,
	knull6,
	knull7,
	knull8,
	knull9,
	knull10,
	Keyboard_Change_Name,
	Keyboard_Text_Messager,
	Keyboard_Global_Search_String,
	doesnothingKeyboard,
	freezePlayerKeyboard,
	Keyboard_Hash_Debugger,
	keyboard_add_player_by_name,
	Keyboard_Plate_text,
	spawn_modified_vehicle_keyboard,
	remove_vehicle_keyboard,
	add_vehicle_keyboard,
	save_creation_relative_to_player,
	save_creation_relative_to_world,
	save_creation_relative_to_vehicle,
	load_creation,
	keyboard_float_option,
	keyboard_send_image,
	keyboard_edit_event_data,
	keyboard_edit_player_sound_id,
	keyboard_edit_player_sound_set,
	keyboard_paradise_chat,
	keyboard_spooner_spawn,
	keyboard_vehicle_spooner_spawn,
	keyboard_admin_message,
	keyboard_admin_invite,
	keyboard_outfit_name,
	keyboard_input_object_hash,
	keyboard_input_rcev5_mult,
	keyboard_input_rcev5_str
};




