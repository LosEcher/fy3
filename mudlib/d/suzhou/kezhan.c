// Room: /d/suzhou/kezhan.c

inherit ROOM;

void create()
{
	set("short", "������ջ");
	set("long", @LONG
�����ǽ������ǣ����������Ŀ�����ʵ���١�������ջ���������������ϣ�
���ٿ��̶�Ľ�����������ݳ��ڵ�����󶼱���ҿ�ջ��������һ�����ţ���С
��������Ц�ݵ�ӭ��������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"chengnanjie1",
		"up" :__DIR__"woshi",
]));

	set("objects",([
		__DIR__"npc/xiaoer" :1,
]));
	setup();
}
int valid_leave(object who,string dir)
{
	object npc;
	npc=present("xiao er",this_object());
	if(dir=="east")	{
		who->delete_temp("rent_paid");
		return ::valid_leave(who,dir);
	}
	if(dir=="up"&& ! (int)who->query_temp("rent_paid")
		&& objectp(npc))	{
	return notify_fail("��С����Ц����û�����Ӿ���ס�ޣ����������������\n");
			}
	return ::valid_leave(who,dir);
}
