//Mr.music yangzhou Ҧ��Ǯׯ

inherit BANK;

void create()
{
	set("short", "Ҧ��Ǯׯ");
	set("long", @LONG
	�����ǳ�����������Ǯׯ--Ҧ��Ǯׯ����Ϣ��͵�������Ƿ��
��˵����Ҧ�ϰ�͸����к����ԨԴ����å����һ�㶼���������鷳��
��������һ��������ܺá�

LONG
	);

	set("exits", ([ 
		      "south" : __DIR__"dongguan1",
	             ]));
set("no_fight",1);
	set("objects", ([
		__DIR__"npc/yaolaoban": 1
	]) );

	setup();
}

int valid_leave(object me, string dir)
{
        tell_object(this_player(),"�������Ŀڴ���Ц��Ц���߳���Ǯׯ. \n");
	return 1;
}
