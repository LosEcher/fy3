// thd:nebeach2.c

inherit ROOM;

void create()
{
      set("short", "��̲");
	set("long", @LONG
����һƬ�ྻ�ĺ�̲����̲��ɳ����Ϊ�к�ˮ���ϵĳ�ˢ�����Ե÷�
���ɾ����������������ϸɳ�ϣ�������һ������Ľ�ӡ���Ǳ����Ĵ�
���Ӧ������һ�������ɽˮ����ɳ̲���в���Ư���ı��ǣ�������ϲ��
�����⺣̲Ҳ����Щ�߳��û�����ҪС�İ���
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/beike2" :  1,
		__DIR__ "npc/snake" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "southeast" : __DIR__"nebeach1",
          "northwest" : __DIR__"foot",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

