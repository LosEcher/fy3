inherit ROOM;

void create()
{
      set("short", "������");
      set("long", @LONG
������ɽׯ�������������氵���޹⣬��֪�ж��ֻ�ɼ�����ɽׯ
��������վ������ǰ...
LONG
      );

      set("objects", ([
               "/d/yandang/boj/lingzhi": 1,
      ]));

      set("exits", ([
            "west"   : __DIR__"bank",
      ]));

      setup();
      replace_program(ROOM);
}

