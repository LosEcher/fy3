#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "Ϸ̨");
	set("long", @LONG
������Ϸ̨����Ȼ��ЩС�����Ǻܸɾ���һ�����Ļ����ס��
��̨��һ��Ϸ��������ǻ�õ��ı��ݡ���һ̤��Ϸ̨���鲻�Խ��ؾͳ�
�������
LONG );
	set("exits", ([
		"down" : __DIR__"xiyuan",
	        "southdown":__DIR__"houtai",
	]));
	set("objects", ([
		"/d/city2/npc/xizi": 1,
	]));
	setup();
}

int valid_leave(object me, string dir)
{
    int i;
if(dir=="down")
{
message_vision(
"\n$Nһ�����գ�һҾ��������ƽ�ɣ���̨��Ծ����˫��أ��\n"+
"��ȭ�����������̬������������Ȳɡ�\n",this_player());
i=this_player()->query("mingwang");
if(i<200) 
{
i=i+100;
this_player()->set("mingwang",i);
message_vision(HIC "\n$N����������ˡ�\n" NOR,this_player());
}
}
this_player()->delete_temp("hastryup");
return ::valid_leave(me, dir);
}
