// thd:bookroom.c

inherit ROOM;

void create()
{
      set("short", "�鷿");
	set("long", @LONG
�����ǻ�ҩʦ���鷿����˵��ҩʦ���ŷǽ񣬵���������治�٣���
��������������Ǹ�����ܡ����ӵĶ����������Ƶ��鼸���鼸��̯�ż�
���Ƶ������ڿ����飬������һ����������ء������ǽ�ϻ����ŷ�ˮī
ɽˮ��������һ��ɽ·��Ũ�����������ֵ������ţ�����ʮ�����أ�����
�㲻����ʲô��˼���鷿�ı����ǻƵ��������ң������Ǵ�����
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/hyaoshi" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
	    "southeast" : __DIR__"hall",
	    "north" : __DIR__"bedroom",
	]));
      
	setup();
	replace_program(ROOM);
}

