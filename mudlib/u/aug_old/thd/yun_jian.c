// thd:yun_jian.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "���ƽ�");
	set("long", @LONG
�������ɽ��������СϪ˳ɽ���¡��������·�����ǧ���٣�˭����
�뵽���������ư�����������ﾹȻֻ����������СϪ�أ�Ϫˮ�羵��
ӳ��������Ʈ���İ��ƣ�ɷ�Ǻÿ���
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "east" : __DIR__"spring",
          "westdown" : __DIR__"hill8",
          "northup" : __DIR__"hill9",
  	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

