// thd:bath_room.c

inherit ROOM;

void create()
{
      set("short", "�һ���");
	set("long", @LONG
���Ǹ�ʮ�ָɾ���ˮ�ء�����Դͷ���ǵ�ָ���ϵ�����Ȫ�����Բ���
��ô�ྻ����ˮ�ر������ܿ��ĵ�ˮ�ص׵Ķ���ʯ��ˮ�ر߻���һ������
����ľ���ӡ��㿴����ˮ���̲�ס������ˮϴ���衣���������Ů���ӣ�
��Ҫ���ı���͵��ร�:-)
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "northwest" : __DIR__"in_road5",
	]));

	set("no_fight", 1);
	set("bath_room", 1);
	set("bath_equipment", "�һ���");
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

