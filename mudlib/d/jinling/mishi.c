// thd:bookroom.c

inherit ROOM;


void create ()
{
  set ("short", "����");
  set ("long", @LONG
   �벻�����澹���ж��졣ֻ����ǽ�ϲ���һ�����˵ĵ�(boade). 
   ���������϶��ǡ��书�ؼ��������������Ҳ���������飬�߽�һ�� 
   ֻ������д��������׭��������ħ�󷨡���
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "boade" :
   "����һ�ѳ����˻�ɫ��ߵĳ�������Ȼ��ʽ��ţ�ȴ��������.",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"workroom.c",
  "down" : "/u/cyj/room/shizhong.c",
]));
  set("no_fight", 10);
  setup();
}
