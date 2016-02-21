

inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
����һ���徲�ľ����ң������ǽ����ȴ�����˸������������Ѿ�
ʧ���ľ�����С�ÿ���齣���Ӷ�����������ϰһ��ʱ�䣬
LONG );
        set("exits", ([
            "out" : __DIR__"bedroom",
        ]));
        set("no_clean_up", 0);

        setup();
}
void init()
{
        add_action("do_mianbi", "mianbi");
        add_action("do_mianbi", "face");
}
int do_mianbi(string type)
{
      object ob;
      int c_exp,c_skill,type1;
      string skilltype,type2;
      ob = this_player();

      if (!type)
            type1=random(20);
      else
      {
            switch (type)
            {
                  case "0": type1=0;break;
                  case "1": type1=1;break;
                  case "2": type1=2;break;
                  case "3": type1=3;break;
                  case "4": type1=4;break;
                  case "5": type1=5;break;
                  case "6": type1=6;break;
                  case "7": type1=7;break;
                  case "8": type1=8;break;
                  case "9": type1=9;break;
                  case "10": type1=10;break;
                  case "11": type1=11;break;
                  case "12": type1=12;break;
                  case "13": type1=13;break;
                  case "14": type1=14;break;
                  case "15": type1=15;break;
                  case "16": type1=16;break;
                  case "17": type1=17;break;
                  case "18": type1=18;break;
                  case "19": type1=19;break;
                  default: type1=20;break;
            }
      }
     
      switch (type1)
      {
            case 0:
                  skilltype="duanjia-sword";
                  break;
            case 1:
                  skilltype="fumo-zhangfa";
                  break;
            case 2:
                  skilltype="hanbing-zhenqi";
                  break;
            case 3:
                  skilltype="hamagong";
                  break;
            case 4:
                  skilltype="dugu-jiujian";
                  break;
            case 5:
                  skilltype="shibapan-jianfa";
                  break;
            case 6:
                  skilltype="parry";
                  break;
            case 7:
                  skilltype="tiangang-zhi";
                  break;
            case 8:
                  skilltype="poyu-quan";
                  break;
            case 9:
                  skilltype="tianfeng-xuan";
                  break;
            case 10:
                  skilltype="unarmed";
                  break;
            case 11:
                  skilltype="feiyan-huixiang";
                  break;
            case 12:
                  skilltype="luoyan-jianfa";
                  break;
            case 13:
                  skilltype="literate";
                  break;
            case 14:
                  skilltype="kuaihuo-zhang";
                  break;
            case 15:
                  skilltype="hunyuan-zhang";
                  break;
            case 16:
                  skilltype="sword";
                  break;
            case 17:
                  skilltype="force";
                  break;
            case 18:
                  skilltype="yuxuan-guizhen";
                  break;
            case 19:
                  skilltype="huifeng-jian";
                  break;
            default:
                  skilltype=type;
                  break;
      }
      type2=to_chinese(skilltype);
      if (type2==skilltype)
            type2="���ּ���";
      if (!ob->query_skill(skilltype,1))
      {
            message_vision("$N��"+type2+"��û���ţ��޷�����ǽ�����ݡ�\n",ob);
            return 1; 
      }
      c_skill=(int)ob->query_skill(skilltype, 1);
      c_exp=ob->query("combat_exp");

      if ((c_skill*c_skill*c_skill/10)> c_exp)
      {
            message_vision("$N��ʵս���鲻�㣬�޷�����ǽ�����ݡ�\n",ob);
            return 1; 
      }
   if (ob->query("ken")<20)
      {
            message_vision("$N̫���ˣ������޷�����ǽ�����ݡ�\n",ob);
            return 1; 
      }

      message_vision("$N�����ǽ��������˼�����ã���"+to_chinese(skilltype)+"��������\n",ob);
      ob->improve_skill(skilltype, random(50*ob->query("int")));
      ob->add("jing",-5);
      return 1;
}


