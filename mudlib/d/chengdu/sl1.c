// Room: /d/chengdu/sl1
inherit ROOM;

void create ()
{
  set ("short", "ɽ·");
  set ("long", @LONG
���������ӳɶ����Ŀ�µ�ɽ·�����ں�Ŀ���ڽ�������������
�ڰ��������������Ŀ�µ��˴򽻵�����·��������ϡ�٣����Ӳݴ���
���粻��ϸ���Ϻ�������·��
LONG);

  set("outdoors", "/d/chengdu");
  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"dadao7",
  "northwest" : __DIR__"sl2",
]));

  setup();
}
