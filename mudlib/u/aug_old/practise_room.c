// thd:practise_room.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
�������һ����ӵ������������а��ż������ţ��м���������������
������������������������о����ĵģ�˭Ҳ��˵�����������Ӱ���˱�
�ˡ����ﲻ����䣬��Ҳ��Ϊ�˷�ֹ��������ʹ�����߻���ħ.
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/tiexiao" :  1,
	]));

      set("exits", ([ /* sizeof() == 1 */
	    "south" : __DIR__"in_road3",
	]));
	
	set("no_fight",1);
      
	setup();
	replace_program(ROOM);
}

