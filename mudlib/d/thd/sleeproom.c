// thd:sleeproom.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "��Ϣ��");
	set("long", @LONG
��������Ϣ�ҡ����п�ǽ���⼸��������������ʰ�ĺܸɾ������
��һ����Ⱦ�����еĹ��ߺܰ�������Ҳ�����ţ�һ������Ͳ�����������
˯����
LONG
);

      set("exits", ([ /* sizeof() == 1 */
	    "east" : __DIR__"in_road3",
	]));

	set("no_fight", 1);
	set("sleep_room", 1);
	set("sleep_equipment", "����");
      
	setup();
	replace_program(ROOM);
}

