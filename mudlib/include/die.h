void die()
{
        int kaifa;
        int kf;
        string banghui;
        object area;
        if(base_name(environment())+".c"!=query("area_file"))
                return ::die();
        if(! stringp(banghui=query("banghui")))
                return ::die();
        area=new("/obj/area");
        area->create(query("area_name"));
        if(area->query("no_use"))       {
                destruct(area);
                return ::die();
        }
        kaifa=area->query("kaifa");
        kf=query("kaifa");
        if( kf==kaifa)	{
		destruct(area);
		return ::die();
        }
        kaifa=kaifa-(random(10)+1);
        if(kaifa<=kf)    kaifa=kf;
        area->set("kaifa",kaifa);
        area->save();
        destruct(area);
        message("channel:rumor",YEL"��ҥ�ԡ�ĳ�ˣ�����"+query("name")+
        "��ɱ��"+query("area_name")+"�Ŀ����Ƚ�Ϊ"+kaifa+"��\n"NOR,users());
        return ::die();
}
