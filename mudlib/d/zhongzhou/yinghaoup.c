//yinghaoup
  

inherit ROOM;

void create()
{
	set("short", "Ӣ���ƼҶ�¥");
	set("long", @LONG
����Ӣ���ƼҶ�¥����������������Ļ����������˿��Ծ����۵ף�
�����ϲ���徻һ�㣬����������䡣���ϻ���һ�����䣬�ȶ��˿�����
����С��Ƭ�̡�
LONG
	);

	set("exits", ([
		"up":"/d/wiz/meeting",
		"east":__DIR__"gonggao",
		"west" : __DIR__"xiuxishi",
		"down" : __DIR__"yinghao",
	]));
        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/laotou" : 1,
]));
set("no_fight",1);


	setup();
}
int valid_leave(object who,string dir)
{
	if(dir!="up")	return ::valid_leave(who,dir);
	if(! wizardp(who))
		return notify_fail("ֻ����ʦ������ȥ��\n");
	return ::valid_leave(who,dir);
}

